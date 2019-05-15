print("水仙花數：")
counter = 0
for i in range(100, 1000, 1):
    hundred = int(i / 100)
    ten = int((i / 10) % 10)
    one = int(i % 10)
    #print(hundred," ", ten, " ", one)
    if i == hundred ** 3 + ten ** 3 + one ** 3:
        print(i, "是水仙花數!!!")
        counter = counter + 1
print("100 ~ 999間共有", counter, "個水仙花數!!!")        