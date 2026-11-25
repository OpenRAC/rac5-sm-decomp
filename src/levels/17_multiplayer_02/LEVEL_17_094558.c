typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_0025C2A8[];
extern void func_094400(Entry *entry, int value);

void func_094558(unsigned int index, int value) {
    func_094400(&D_0025C2A8[index], value);
}
