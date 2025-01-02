class Solution:
    def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
        # Get the number of words
        total_words = len(words)
        
        # Initialize a prefix sum array with an extra slot for ease of calculation
        prefix_sum = [0] * (total_words + 1)
        
        # Define the set of vowels
        vowels = {'a', 'e', 'i', 'o', 'u'}

        # Calculate the prefix sum where each position represents the count of valid vowel strings so far
        for index in range(total_words):
            prefix_sum[index + 1] = prefix_sum[index]
            if words[index][0] in vowels and words[index][-1] in vowels:
                prefix_sum[index + 1] += 1

        # Initialize the results list
        results = []

        # Process each query to calculate the number of vowel strings in the given range
        for start, end in queries:
            results.append(prefix_sum[end + 1] - prefix_sum[start])

        return results
