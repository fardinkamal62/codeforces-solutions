tests = int(input())

for i in range(tests):
    [shelves, bottles] = input().split(" ")
    shelves = int(shelves)
    bottles = int(bottles)

    total_cost = 0

    for j in range(bottles):
        [brand, cost] = input().split(" ")
        brand = int(brand)
        cost = int(cost)

        if brand <= shelves:
            total_cost += cost

    print(total_cost)
