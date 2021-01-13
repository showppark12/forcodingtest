import heapq


def solution(scoville, K):
    heap = []
    for s in scoville:
        heapq.heappush(heap, s)
    answer = 0
    while heap[0] < K:
        try:
            heapq.heappush(heap, heapq.heappop(heap) + heapq.heappop(heap) * 2)
        except IndexError:
            return -1
        answer += 1

    return answer