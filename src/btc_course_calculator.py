# This file will contain the function to calculate the BTC course.

import requests

def get_btc_course():
    # Function to get the current BTC course from a stock exchange
    url = "https://api.example.com/btc-course"
    try:
        response = requests.get(url)
        response.raise_for_status()  # Raise an exception for HTTP errors
        return response.json().get('course')
    except requests.exceptions.RequestException as e:
        print(f"An error occurred: {e}")
        return None
