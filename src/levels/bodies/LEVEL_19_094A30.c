typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_0026B128[];
extern void func_094B30(Entry *entry);

void func_094A30(unsigned int index) {
    func_094B30(&D_0026B128[index]);
}
