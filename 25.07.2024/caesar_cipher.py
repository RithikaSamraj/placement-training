def caesar_cipher(text, shift):
    result = ''
    for char in text:
        if char.isalpha():
            shift_base = ord('a') if char.islower() else ord('A')
            result += chr((ord(char) - shift_base + shift) % 26 + shift_base)
        else:
            result += char
    return result

text = "Hello, World!"
shift = 3
print(caesar_cipher(text, shift))
