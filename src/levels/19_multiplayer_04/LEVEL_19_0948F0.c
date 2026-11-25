typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_0026B128[];
extern void func_094798(Entry *entry, int value);

void func_0948F0(unsigned int index, int value) {
    func_094798(&D_0026B128[index], value);
}
