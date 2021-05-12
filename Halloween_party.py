#problem - https://www.hackerrank.com/challenges/halloween-party/problem
def halloweenParty(k):
    return (k//2)*(k-k//2)

for _ in range(int(input())):
    print(halloweenParty(int(input())))
