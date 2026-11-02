typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_003305BC[];
extern void func_0EF800(Entry *entry);

void func_0EF930(unsigned int index) {
    func_0EF800(&D_003305BC[index]);
}
