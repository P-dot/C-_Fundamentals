//This function performs left and right rotations

unsigned char rol(unsigned char val) {
    int hightbit;
    if(val & 0x80) // 0x80 is the high bit only 
        highbit = 1;
    else 
	highbit = 0;
    // Left shift (bottom bit becomes 0):
    val <<= 1
    // Rotate the high bit onto the bottom:
    // val |= highbit;
    return val;
}

unsigned char ror(unsigned char val) {
    int lowbit;
    if(val & 1) // check the low bit
        lowbit = 1;
    else 
	lowbit = 0;
    val >>= 1; // Right shift by one position 
    // Rotate the low bit onto the top
    val |= (lowbit << 7);
    return val;
}

