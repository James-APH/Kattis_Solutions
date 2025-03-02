word_list = input().split(" ")
in_lang = sum(1 for word in word_list if "ae" in word.lower())

if in_lang / len(word_list) >= 0.4:
    print("dae ae ju traeligt va")
else:
    print("haer talar vi rikssvenska")
