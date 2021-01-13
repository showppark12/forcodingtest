import heapq
from collections import deque


def solution(healths, items):
    healths.sort()
    items = [(buff, idx, debuff) for idx, (buff, debuff) in enumerate(items, 1)]
    BUFF, INDEX, DEBUFF = 0, 1, 2
    items.sort(key=lambda x: x[DEBUFF])
    items = deque(items)
    answer = []
    availableItems = []
    for health in healths:
        while items and health - items[0][DEBUFF] >= 100:
            item = items.popleft()
            heapq.heappush(availableItems, (-item[BUFF], item[INDEX]))
        if availableItems:
            answer.append(heapq.heappop(availableItems)[INDEX])

    answer.sort()
    return answer