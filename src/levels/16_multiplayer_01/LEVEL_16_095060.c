typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_0026AFA8[];
extern void func_094F08(Entry *entry, int value);

void func_095060(unsigned int index, int value) {
    func_094F08(&D_0026AFA8[index], value);
}
