def fibonacci(n):
  if n == 0 or n == 1:
    return 1
  else:
    return fibonacci(n-1) + fibonacci(n-2)
  
number = int(input("How many fibo series you want? :"))

for i in range(number):
  print(fibonacci(i))