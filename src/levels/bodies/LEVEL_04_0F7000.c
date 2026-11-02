typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_0034ADEC[];
extern void func_0F6E98(Entry *entry);

void func_0F7000(unsigned int index) {
    func_0F6E98(&D_0034ADEC[index]);
}
