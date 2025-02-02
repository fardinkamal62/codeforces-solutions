tests = int(input())

for i in range(tests):
    initial = input()
    # string = list(map(int, initial.split()))
    string = [int(char) for char in initial]

    queries = int(input())

    for j in range(queries):
        new_string = string.copy()
        [index, operation] = input().split(" ")
        operation = int(operation)

        index = int(index)
        new_string [index - 1] = operation


        if any(new_string[k:k + 4] == [1, 1, 0, 0] for k in range(len(new_string) - 4 + 1)):
            print("YES")
        else:
            print("NO")
