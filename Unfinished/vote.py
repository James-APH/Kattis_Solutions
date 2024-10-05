# Possible - Just tedius
test_cases = int(input())
i = 0
while i < test_cases:
    candidate_nums = int(input())
    total_votes = 0
    candidates = {}
    j = 0
    max = 0
    total = 0
    while j < candidate_nums:
        candidates[j+1] = input()
        total += candidates[j+1]
        if max < candidates[j+1]:
            max = candidates[j+1]
        j+=1
    if len(set(candidates)) == 1:
        print('no winner')
    elif max(candidates) 
    
    i+=1
