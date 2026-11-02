typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_00331434[];
extern void func_0F0048(Entry *entry);

void func_0F0178(unsigned int index) {
    func_0F0048(&D_00331434[index]);
}
