def fibo(n:int) -> int:
  if n == 0:
    return 0
  if n == 1:
    return 1
  else:
    return fibo(n - 1) + fibo(n - 2)
  
num = int(input("Give number: "))

for i in range(num):
  print(fibo(i))