typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_003026D8[];
extern void func_0B06C0(Entry *entry, int value);

void func_0B07F0(unsigned int index, int value) {
    func_0B06C0(&D_003026D8[index], value);
}
