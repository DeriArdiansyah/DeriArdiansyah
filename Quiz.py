def check_guess(guess, answer):
    global score
    still_guessing = True
    attempt = 0
    while still_guessing and attempt < 3:
        if guess.lower() == answer.lower():
            print("masukan jawaban anda")
            score = score + 1
            still_guessing = False
        else:
            if attempt < 2:
                guess = input("maaf jawaban anda salah, coba kembali")
            attempt = attempt + 1
    if attempt == 3:
        print("The Correct answer is ",answer )
    
score = 0
print("soal nya")
guess1 = input("binatang apa yang pemakan daging? ")
check_guess(guess1, "singa")
guess2 = input("sebutkan binatang tercepat didarat? ")
check_guess(guess2, "Cheetah")
guess3 = input("binatang terbesar di bumi? ")
check_guess(guess3, "paus biru")
print("total score yang Anda miliki" + str(score))
print ("おめでと")
