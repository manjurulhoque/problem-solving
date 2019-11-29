import string

class Solution:
    def uniqueMorseRepresentations(self, words: List[str]) -> int:
        unique = set()
        morse = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-",
                 "-.--","--.."]
        letters = list(string.ascii_lowercase)
        for word in words:
            transform = ''
            for s in word:
                transform = transform + morse[letters.index(s)]
            unique.add(transform)
        # print(letters.index('g'))
        return len(unique)