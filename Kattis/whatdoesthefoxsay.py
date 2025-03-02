def removeSounds(soundList, barredWords):
    temp = []
    for sound in soundList:
        if sound not in barredWords:
            temp.append(sound)

    return temp


testCases = int(input())

for x in range(testCases):
    sounds = str(input())
    barredWords = []
    soundList = list(sounds.split(" "))
    while True:
        animalNoise = str(input())
        if animalNoise == "what does the fox say?":
            break
        else:
            barredWords.append(animalNoise.split(" ")[2])
    foxSays = " ".join(removeSounds(soundList, barredWords))
    print(foxSays)
