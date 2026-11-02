typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_00302874[];
extern void func_0E2F30(Entry *entry);

void func_0E3060(unsigned int index) {
    func_0E2F30(&D_00302874[index]);
}
