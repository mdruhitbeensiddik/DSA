from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
import time

# ফেসবুক একাউন্টে লগইন তথ্য
phone_number = "01723763149"
password = "@ruhit#2441139"

# ক্রোমড্রাইভার শুরু করুন
driver = webdriver.Chrome()

# ফেসবুকে লগইন পৃষ্ঠায় যান
driver.get("https://www.facebook.com")

# ইউজারনেম এবং পাসওয়ার্ড প্রদান করুন এবং লগইন করুন
driver.find_element(By.NAME, "email").send_keys(phone_number)
driver.find_element(By.NAME, "pass").send_keys(password)
driver.find_element(By.NAME, "login").click()

# কিছু সময় অপেক্ষা করুন, লগইন সম্পন্ন হওয়ার জন্য
time.sleep(40)

# মেসেজ পেজে যান
driver.get("https://www.facebook.com/messages/t/100025477322809")

# মেসেজ ডিলিট করার লুপ
for i in range(1, number_of_messages_to_delete + 1):
    # ডিলিট করতে চাইমুলক মেসেজের সেলেক্টর
    message_selector = f"div[aria-posinset='{i}']"  # প্রতিবার নতুন মেসেজ সিলেক



