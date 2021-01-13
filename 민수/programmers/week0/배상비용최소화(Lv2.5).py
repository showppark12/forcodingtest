import heapq
def solution(no, works):

    heap = []
    for work in works:
        heapq.heappush(heap, work * -1)

    while no > 0:

        item = heapq.heappop(heap)
        if item == 0:
            break
        item += 1
        heapq.heappush(heap, item)
        no -= 1

    result = list(map(lambda x: x ** 2, heap))

    return sum(result)