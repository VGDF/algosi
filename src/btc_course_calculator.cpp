// This file will contain the function to calculate the BTC course in C++

#include <iostream>
#include <string>
#include <curl/curl.h>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

size_t WriteCallback(void* contents, size_t size, size_t nmemb, void* userp) {
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

double get_btc_course() {
    CURL* curl;
    CURLcode res;
    std::string readBuffer;

    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://api.example.com/btc-course");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        if(res != CURLE_OK) {
            std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
            return -1;
        }

        try {
            auto jsonResponse = json::parse(readBuffer);
            if (jsonResponse.contains("course")) {
                return jsonResponse["course"];
            } else {
                std::cerr << "JSON response does not contain 'course' field." << std::endl;
                return -1;
            }
        } catch (const json::parse_error& e) {
            std::cerr << "JSON parse error: " << e.what() << std::endl;
            return -1;
        }
    }
    return -1;
}

int main() {
    double course = get_btc_course();
    if(course != -1) {
        std::cout << "Current BTC course: " << course << std::endl;
    } else {
        std::cout << "Failed to get BTC course." << std::endl;
    }
    return 0;
}
