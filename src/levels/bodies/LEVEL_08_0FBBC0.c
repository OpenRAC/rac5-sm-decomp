typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_003806B4[];
extern void func_0FBA90(Entry *entry);

void func_0FBBC0(unsigned int index) {
    func_0FBA90(&D_003806B4[index]);
}
