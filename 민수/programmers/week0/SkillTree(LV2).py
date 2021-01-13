from collections import deque
def solution(skill, skill_trees):
    answer = 0
    for tree in skill_trees:
        tree = deque(tree)
        skills = deque(skill)
        for item in tree:
            item = tree.popleft()
            if item in skills:
                s = skills.popleft()
                if s != item:
                    break
                else:
                    answer += 1
    return answer