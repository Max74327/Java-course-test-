impoort random

data1 = "abcdefghijklmnopqrstuvwxyz"
data2 = "0123456789"
data3 = "_-*&%$#@"
data4 = data1.upper()
data = data1 + data2 + data3 + data4

out = random.choice(data1) + random.choice(data2) + random.choice(data3) + random.choice(data4) + random.choices(data, k=randint(4, 8))
print(random.shuffle(out))
