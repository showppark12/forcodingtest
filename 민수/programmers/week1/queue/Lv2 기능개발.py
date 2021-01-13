from collections import deque
def solution(progresses, speeds):
    answer = []
    time = 0
    count = 0
    progresses = deque(progresses)
    speeds = deque(speeds)
    while (len(progresses)>0):
        # 큐를 이용해서 첫번째가 100 이상인경우에 팝을 하고, count 1증가 시킴
        if(progresses[0] + time*speeds[0])>=100:
            progresses.popleft()
            speeds.popleft()
            count += 1
        else:
            # progresses에 아직 남은 작업이 있는경우
            if count>0:
                answer.append(count)
                count = 0
            time += 1
    answer.append(count)
    return answer