typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_0026B128[];
extern void func_094798(Entry *entry);

void func_0948F0(unsigned int index) {
    func_094798(&D_0026B128[index]);
}
