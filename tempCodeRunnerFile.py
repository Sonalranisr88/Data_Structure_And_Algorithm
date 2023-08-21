import requests
url = "https://here.com"

Web_HTML = request.get(url)

print(Web_HTML.text)
