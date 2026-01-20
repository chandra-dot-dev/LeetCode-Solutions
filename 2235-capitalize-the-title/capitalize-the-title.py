class Solution:
    def capitalizeTitle(self, title: str) -> str:
        words = title.split()
        result = []
        for word in words:
            word = word.lower()
            if len(word) >= 3:
                word = word[0].upper() + word[1:]
            result.append(word)
        return " ".join(result)
