

card_num,max_num=input().split(' ')
card_num= int(card_num)
max_num = int(max_num)
card_list =list(map(int,input().split(' ')))
max_value=0
for card1 in range(card_num):
    for card2 in range(card1+1,card_num):
        for card3 in range(card2+1,card_num):
            if (card_list[card1]+card_list[card2]+card_list[card3])>max_num:
                continue
            else:
                max_value = max(max_value,card_list[card1]+card_list[card2]+card_list[card3])

print(max_value)


