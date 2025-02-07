print('Welcome to AskPython Quiz')
answer = input('Are you ready to play the Quiz? (yes/no): ')
score = 0
total_questions = 3

if answer.lower() == 'yes':
    questions = [
        ("What is your favorite programming language?", "python"),
        ("Do you follow any author on AskPython? (yes/no)", "yes"),
        ("What is the name of your favorite website for learning Python?", "askpython")
    ]

    for question, correct_answer in questions:
        answer = input(question + ' ')
        if answer.lower() == correct_answer:
            score += 1
            print('Correct!')
        else:
            print('Wrong Answer :(')

    print('Thank you for playing this small quiz game! You answered', score, "questions correctly!")
    mark = (score / total_questions) * 100
    print('Marks obtained:', mark)
else:
    print('Maybe next time! Bye!')
