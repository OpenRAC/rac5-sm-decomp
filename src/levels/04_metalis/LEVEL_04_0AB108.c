typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_002CDC58[];
extern void func_0AAFD8(Entry *entry, int value);

void func_0AB108(unsigned int index, int value) {
    func_0AAFD8(&D_002CDC58[index], value);
}
