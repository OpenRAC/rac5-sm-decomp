typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_002B3458[];
extern void func_0A5DC8(Entry *entry, int value);

void func_0A5EF8(unsigned int index, int value) {
    func_0A5DC8(&D_002B3458[index], value);
}
