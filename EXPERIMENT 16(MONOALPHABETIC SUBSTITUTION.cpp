#inclu#include <stdio.h> #include <string.h> #include <ctype.h>
#define ALPHABET SIZE 26
#define NUM TOP PLAINTEXTS 10
const double englishLetterFreq [ALPHABET SIZE] = {
0.0817, 0.0149, 0.0278, 0.0425, 0.1270, 0.0223, 0.0202, 0.0609,
0.0697, 0.0015, 0.0077, 0.0403, 0.0241, 0.0675, 0.0751, 0.0193,
0.0010, 0.0599, 0.0633, 0.0906, 0.0276, 0.0098, 0.0236, 0.0015,
0.0197, 0.0007
void calculateLetterFrequency(const char * text, double *freq) {
int totalLetters = 0,1;
for (i = 0; text [i; i++) {
if isalpha(text il)) <
freq[tolower(text[i]) - 'a']++; totalLetters++;
?
for (i = 0; i < ALPHABET SIZE; i++) <
freqli] /= totalLetters;
?
double calculateScore(const double *freq) {
	double score = 0.0;
int i;
for (i = 0; i< ALPHABET SIZE; i++) {
score += freq[i] * englishLetterFreqlil;
}
return score;
void decryptSubstitution(const char *ciphertext, char *plaintext, int shift) {
int i:
for (i = 0; ciphertext il; i++) <
if (isalpha(ciphertexti])) {
char base = isupper(ciphertext[i]) ? 'A': 'a';
plaintext[i] = (ciphertext [i] - base - shift + ALPHABET_SIZE) % ALPHABET_SIZE + base;
}else {
plaintext = ciphertext OF
}
plaintext [strlen(ciphertext)] = '10';
}
int main() {
const char * ciphertext = "FALSXY XS LSX!"; // Replace with your ciphertext
double ciphertextFreq[ALPHABET SIZE] = {0.0};
int shift;
calculateLetterFrequency(ciphertext, ciphertextFreq);
printf("Ciphertext: %5\n\n", ciphertext);
printf("Top %d possible plaintexts:\n", NUM TOP PLAINTEXTS);
for (shift = 0; shift < ALPHABET SIZE; shift++) {
char possible Plaintext [strlen (ciphertext) + 1];
decryptSubstitution(ciphertext, possiblePlaintext, shift);
double possiblePlaintextFreq[ALPHABET_SIZE] = {0.0};
calculateLetterFrequenc(possiblePlaintext, possiblePlaintextFreq);
double score = calculateScore (possible PlaintextFreq);
printf("Shift %d: %= (Score: %.4f)\n", shift, possible Plaintext, score);
return 0;
}
