typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_002C8D58[];
extern void func_0A7DC8(Entry *entry, int value);

void func_0A7EF8(unsigned int index, int value) {
    func_0A7DC8(&D_002C8D58[index], value);
}
