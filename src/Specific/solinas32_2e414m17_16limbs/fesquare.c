static void fesquare(uint32_t out[16], const uint32_t in1[16]) {
  { const uint32_t x29 = in1[15];
  { const uint32_t x30 = in1[14];
  { const uint32_t x28 = in1[13];
  { const uint32_t x26 = in1[12];
  { const uint32_t x24 = in1[11];
  { const uint32_t x22 = in1[10];
  { const uint32_t x20 = in1[9];
  { const uint32_t x18 = in1[8];
  { const uint32_t x16 = in1[7];
  { const uint32_t x14 = in1[6];
  { const uint32_t x12 = in1[5];
  { const uint32_t x10 = in1[4];
  { const uint32_t x8 = in1[3];
  { const uint32_t x6 = in1[2];
  { const uint32_t x4 = in1[1];
  { const uint32_t x2 = in1[0];
  { uint64_t x31 = (((uint64_t)x2 * x29) + (((uint64_t)x4 * x30) + (((uint64_t)x6 * x28) + (((uint64_t)x8 * x26) + (((uint64_t)x10 * x24) + (((uint64_t)x12 * x22) + (((uint64_t)x14 * x20) + (((uint64_t)x16 * x18) + (((uint64_t)x18 * x16) + (((uint64_t)x20 * x14) + (((uint64_t)x22 * x12) + (((uint64_t)x24 * x10) + (((uint64_t)x26 * x8) + (((uint64_t)x28 * x6) + (((uint64_t)x30 * x4) + ((uint64_t)x29 * x2))))))))))))))));
  { uint64_t x32 = ((((uint64_t)x2 * x30) + (((uint64_t)x4 * x28) + (((uint64_t)x6 * x26) + (((uint64_t)x8 * x24) + (((uint64_t)x10 * x22) + (((uint64_t)x12 * x20) + (((uint64_t)x14 * x18) + ((0x2 * ((uint64_t)x16 * x16)) + (((uint64_t)x18 * x14) + (((uint64_t)x20 * x12) + (((uint64_t)x22 * x10) + (((uint64_t)x24 * x8) + (((uint64_t)x26 * x6) + (((uint64_t)x28 * x4) + ((uint64_t)x30 * x2))))))))))))))) + (0x11 * (0x2 * ((uint64_t)x29 * x29))));
  { uint64_t x33 = ((((uint64_t)x2 * x28) + (((uint64_t)x4 * x26) + (((uint64_t)x6 * x24) + (((uint64_t)x8 * x22) + (((uint64_t)x10 * x20) + (((uint64_t)x12 * x18) + ((0x2 * ((uint64_t)x14 * x16)) + ((0x2 * ((uint64_t)x16 * x14)) + (((uint64_t)x18 * x12) + (((uint64_t)x20 * x10) + (((uint64_t)x22 * x8) + (((uint64_t)x24 * x6) + (((uint64_t)x26 * x4) + ((uint64_t)x28 * x2)))))))))))))) + (0x11 * ((0x2 * ((uint64_t)x30 * x29)) + (0x2 * ((uint64_t)x29 * x30)))));
  { uint64_t x34 = ((((uint64_t)x2 * x26) + (((uint64_t)x4 * x24) + (((uint64_t)x6 * x22) + (((uint64_t)x8 * x20) + (((uint64_t)x10 * x18) + ((0x2 * ((uint64_t)x12 * x16)) + ((0x2 * ((uint64_t)x14 * x14)) + ((0x2 * ((uint64_t)x16 * x12)) + (((uint64_t)x18 * x10) + (((uint64_t)x20 * x8) + (((uint64_t)x22 * x6) + (((uint64_t)x24 * x4) + ((uint64_t)x26 * x2))))))))))))) + (0x11 * ((0x2 * ((uint64_t)x28 * x29)) + ((0x2 * ((uint64_t)x30 * x30)) + (0x2 * ((uint64_t)x29 * x28))))));
  { uint64_t x35 = ((((uint64_t)x2 * x24) + (((uint64_t)x4 * x22) + (((uint64_t)x6 * x20) + (((uint64_t)x8 * x18) + ((0x2 * ((uint64_t)x10 * x16)) + ((0x2 * ((uint64_t)x12 * x14)) + ((0x2 * ((uint64_t)x14 * x12)) + ((0x2 * ((uint64_t)x16 * x10)) + (((uint64_t)x18 * x8) + (((uint64_t)x20 * x6) + (((uint64_t)x22 * x4) + ((uint64_t)x24 * x2)))))))))))) + (0x11 * ((0x2 * ((uint64_t)x26 * x29)) + ((0x2 * ((uint64_t)x28 * x30)) + ((0x2 * ((uint64_t)x30 * x28)) + (0x2 * ((uint64_t)x29 * x26)))))));
  { uint64_t x36 = ((((uint64_t)x2 * x22) + (((uint64_t)x4 * x20) + (((uint64_t)x6 * x18) + ((0x2 * ((uint64_t)x8 * x16)) + ((0x2 * ((uint64_t)x10 * x14)) + ((0x2 * ((uint64_t)x12 * x12)) + ((0x2 * ((uint64_t)x14 * x10)) + ((0x2 * ((uint64_t)x16 * x8)) + (((uint64_t)x18 * x6) + (((uint64_t)x20 * x4) + ((uint64_t)x22 * x2))))))))))) + (0x11 * ((0x2 * ((uint64_t)x24 * x29)) + ((0x2 * ((uint64_t)x26 * x30)) + ((0x2 * ((uint64_t)x28 * x28)) + ((0x2 * ((uint64_t)x30 * x26)) + (0x2 * ((uint64_t)x29 * x24))))))));
  { uint64_t x37 = ((((uint64_t)x2 * x20) + (((uint64_t)x4 * x18) + ((0x2 * ((uint64_t)x6 * x16)) + ((0x2 * ((uint64_t)x8 * x14)) + ((0x2 * ((uint64_t)x10 * x12)) + ((0x2 * ((uint64_t)x12 * x10)) + ((0x2 * ((uint64_t)x14 * x8)) + ((0x2 * ((uint64_t)x16 * x6)) + (((uint64_t)x18 * x4) + ((uint64_t)x20 * x2)))))))))) + (0x11 * ((0x2 * ((uint64_t)x22 * x29)) + ((0x2 * ((uint64_t)x24 * x30)) + ((0x2 * ((uint64_t)x26 * x28)) + ((0x2 * ((uint64_t)x28 * x26)) + ((0x2 * ((uint64_t)x30 * x24)) + (0x2 * ((uint64_t)x29 * x22)))))))));
  { uint64_t x38 = ((((uint64_t)x2 * x18) + ((0x2 * ((uint64_t)x4 * x16)) + ((0x2 * ((uint64_t)x6 * x14)) + ((0x2 * ((uint64_t)x8 * x12)) + ((0x2 * ((uint64_t)x10 * x10)) + ((0x2 * ((uint64_t)x12 * x8)) + ((0x2 * ((uint64_t)x14 * x6)) + ((0x2 * ((uint64_t)x16 * x4)) + ((uint64_t)x18 * x2))))))))) + (0x11 * ((0x2 * ((uint64_t)x20 * x29)) + ((0x2 * ((uint64_t)x22 * x30)) + ((0x2 * ((uint64_t)x24 * x28)) + ((0x2 * ((uint64_t)x26 * x26)) + ((0x2 * ((uint64_t)x28 * x24)) + ((0x2 * ((uint64_t)x30 * x22)) + (0x2 * ((uint64_t)x29 * x20))))))))));
  { uint64_t x39 = ((((uint64_t)x2 * x16) + (((uint64_t)x4 * x14) + (((uint64_t)x6 * x12) + (((uint64_t)x8 * x10) + (((uint64_t)x10 * x8) + (((uint64_t)x12 * x6) + (((uint64_t)x14 * x4) + ((uint64_t)x16 * x2)))))))) + (0x11 * (((uint64_t)x18 * x29) + (((uint64_t)x20 * x30) + (((uint64_t)x22 * x28) + (((uint64_t)x24 * x26) + (((uint64_t)x26 * x24) + (((uint64_t)x28 * x22) + (((uint64_t)x30 * x20) + ((uint64_t)x29 * x18))))))))));
  { uint64_t x40 = ((((uint64_t)x2 * x14) + (((uint64_t)x4 * x12) + (((uint64_t)x6 * x10) + (((uint64_t)x8 * x8) + (((uint64_t)x10 * x6) + (((uint64_t)x12 * x4) + ((uint64_t)x14 * x2))))))) + (0x11 * ((0x2 * ((uint64_t)x16 * x29)) + (((uint64_t)x18 * x30) + (((uint64_t)x20 * x28) + (((uint64_t)x22 * x26) + (((uint64_t)x24 * x24) + (((uint64_t)x26 * x22) + (((uint64_t)x28 * x20) + (((uint64_t)x30 * x18) + (0x2 * ((uint64_t)x29 * x16))))))))))));
  { uint64_t x41 = ((((uint64_t)x2 * x12) + (((uint64_t)x4 * x10) + (((uint64_t)x6 * x8) + (((uint64_t)x8 * x6) + (((uint64_t)x10 * x4) + ((uint64_t)x12 * x2)))))) + (0x11 * ((0x2 * ((uint64_t)x14 * x29)) + ((0x2 * ((uint64_t)x16 * x30)) + (((uint64_t)x18 * x28) + (((uint64_t)x20 * x26) + (((uint64_t)x22 * x24) + (((uint64_t)x24 * x22) + (((uint64_t)x26 * x20) + (((uint64_t)x28 * x18) + ((0x2 * ((uint64_t)x30 * x16)) + (0x2 * ((uint64_t)x29 * x14)))))))))))));
  { uint64_t x42 = ((((uint64_t)x2 * x10) + (((uint64_t)x4 * x8) + (((uint64_t)x6 * x6) + (((uint64_t)x8 * x4) + ((uint64_t)x10 * x2))))) + (0x11 * ((0x2 * ((uint64_t)x12 * x29)) + ((0x2 * ((uint64_t)x14 * x30)) + ((0x2 * ((uint64_t)x16 * x28)) + (((uint64_t)x18 * x26) + (((uint64_t)x20 * x24) + (((uint64_t)x22 * x22) + (((uint64_t)x24 * x20) + (((uint64_t)x26 * x18) + ((0x2 * ((uint64_t)x28 * x16)) + ((0x2 * ((uint64_t)x30 * x14)) + (0x2 * ((uint64_t)x29 * x12))))))))))))));
  { uint64_t x43 = ((((uint64_t)x2 * x8) + (((uint64_t)x4 * x6) + (((uint64_t)x6 * x4) + ((uint64_t)x8 * x2)))) + (0x11 * ((0x2 * ((uint64_t)x10 * x29)) + ((0x2 * ((uint64_t)x12 * x30)) + ((0x2 * ((uint64_t)x14 * x28)) + ((0x2 * ((uint64_t)x16 * x26)) + (((uint64_t)x18 * x24) + (((uint64_t)x20 * x22) + (((uint64_t)x22 * x20) + (((uint64_t)x24 * x18) + ((0x2 * ((uint64_t)x26 * x16)) + ((0x2 * ((uint64_t)x28 * x14)) + ((0x2 * ((uint64_t)x30 * x12)) + (0x2 * ((uint64_t)x29 * x10)))))))))))))));
  { uint64_t x44 = ((((uint64_t)x2 * x6) + (((uint64_t)x4 * x4) + ((uint64_t)x6 * x2))) + (0x11 * ((0x2 * ((uint64_t)x8 * x29)) + ((0x2 * ((uint64_t)x10 * x30)) + ((0x2 * ((uint64_t)x12 * x28)) + ((0x2 * ((uint64_t)x14 * x26)) + ((0x2 * ((uint64_t)x16 * x24)) + (((uint64_t)x18 * x22) + (((uint64_t)x20 * x20) + (((uint64_t)x22 * x18) + ((0x2 * ((uint64_t)x24 * x16)) + ((0x2 * ((uint64_t)x26 * x14)) + ((0x2 * ((uint64_t)x28 * x12)) + ((0x2 * ((uint64_t)x30 * x10)) + (0x2 * ((uint64_t)x29 * x8))))))))))))))));
  { ℤ x45 = ((((uint64_t)x2 * x4) + ((uint64_t)x4 * x2)) +ℤ (0x11 *ℤ ((0x2 * ((uint64_t)x6 * x29)) + ((0x2 * ((uint64_t)x8 * x30)) + ((0x2 * ((uint64_t)x10 * x28)) + ((0x2 * ((uint64_t)x12 * x26)) + ((0x2 * ((uint64_t)x14 * x24)) + ((0x2 * ((uint64_t)x16 * x22)) + (((uint64_t)x18 * x20) + (((uint64_t)x20 * x18) + ((0x2 * ((uint64_t)x22 * x16)) + ((0x2 * ((uint64_t)x24 * x14)) + ((0x2 * ((uint64_t)x26 * x12)) + ((0x2 * ((uint64_t)x28 * x10)) + ((0x2 * ((uint64_t)x30 * x8)) + (0x2 * ((uint64_t)x29 * x6)))))))))))))))));
  { ℤ x46 = (((uint64_t)x2 * x2) +ℤ (0x11 *ℤ ((0x2 * ((uint64_t)x4 * x29)) + ((0x2 * ((uint64_t)x6 * x30)) + ((0x2 * ((uint64_t)x8 * x28)) + ((0x2 * ((uint64_t)x10 * x26)) + ((0x2 * ((uint64_t)x12 * x24)) + ((0x2 * ((uint64_t)x14 * x22)) + ((0x2 * ((uint64_t)x16 * x20)) + (((uint64_t)x18 * x18) + ((0x2 * ((uint64_t)x20 * x16)) + ((0x2 * ((uint64_t)x22 * x14)) + ((0x2 * ((uint64_t)x24 * x12)) + ((0x2 * ((uint64_t)x26 * x10)) + ((0x2 * ((uint64_t)x28 * x8)) + ((0x2 * ((uint64_t)x30 * x6)) + (0x2 * ((uint64_t)x29 * x4))))))))))))))))));
  { uint64_t x47 = (x46 >> 0x1a);
  { uint32_t x48 = (x46 & 0x3ffffff);
  { ℤ x49 = (x47 +ℤ x45);
  { uint64_t x50 = (x49 >> 0x1a);
  { uint32_t x51 = (x49 & 0x3ffffff);
  { uint64_t x52 = (x50 + x44);
  { uint64_t x53 = (x52 >> 0x1a);
  { uint32_t x54 = ((uint32_t)x52 & 0x3ffffff);
  { uint64_t x55 = (x53 + x43);
  { uint64_t x56 = (x55 >> 0x1a);
  { uint32_t x57 = ((uint32_t)x55 & 0x3ffffff);
  { uint64_t x58 = (x56 + x42);
  { uint64_t x59 = (x58 >> 0x1a);
  { uint32_t x60 = ((uint32_t)x58 & 0x3ffffff);
  { uint64_t x61 = (x59 + x41);
  { uint64_t x62 = (x61 >> 0x1a);
  { uint32_t x63 = ((uint32_t)x61 & 0x3ffffff);
  { uint64_t x64 = (x62 + x40);
  { uint64_t x65 = (x64 >> 0x1a);
  { uint32_t x66 = ((uint32_t)x64 & 0x3ffffff);
  { uint64_t x67 = (x65 + x39);
  { uint64_t x68 = (x67 >> 0x19);
  { uint32_t x69 = ((uint32_t)x67 & 0x1ffffff);
  { uint64_t x70 = (x68 + x38);
  { uint64_t x71 = (x70 >> 0x1a);
  { uint32_t x72 = ((uint32_t)x70 & 0x3ffffff);
  { uint64_t x73 = (x71 + x37);
  { uint64_t x74 = (x73 >> 0x1a);
  { uint32_t x75 = ((uint32_t)x73 & 0x3ffffff);
  { uint64_t x76 = (x74 + x36);
  { uint64_t x77 = (x76 >> 0x1a);
  { uint32_t x78 = ((uint32_t)x76 & 0x3ffffff);
  { uint64_t x79 = (x77 + x35);
  { uint64_t x80 = (x79 >> 0x1a);
  { uint32_t x81 = ((uint32_t)x79 & 0x3ffffff);
  { uint64_t x82 = (x80 + x34);
  { uint64_t x83 = (x82 >> 0x1a);
  { uint32_t x84 = ((uint32_t)x82 & 0x3ffffff);
  { uint64_t x85 = (x83 + x33);
  { uint64_t x86 = (x85 >> 0x1a);
  { uint32_t x87 = ((uint32_t)x85 & 0x3ffffff);
  { uint64_t x88 = (x86 + x32);
  { uint64_t x89 = (x88 >> 0x1a);
  { uint32_t x90 = ((uint32_t)x88 & 0x3ffffff);
  { uint64_t x91 = (x89 + x31);
  { uint64_t x92 = (x91 >> 0x19);
  { uint32_t x93 = ((uint32_t)x91 & 0x1ffffff);
  { uint64_t x94 = (x48 + (0x11 * x92));
  { uint32_t x95 = (uint32_t) (x94 >> 0x1a);
  { uint32_t x96 = ((uint32_t)x94 & 0x3ffffff);
  { uint32_t x97 = (x95 + x51);
  { uint32_t x98 = (x97 >> 0x1a);
  { uint32_t x99 = (x97 & 0x3ffffff);
  out[0] = x96;
  out[1] = x99;
  out[2] = (x98 + x54);
  out[3] = x57;
  out[4] = x60;
  out[5] = x63;
  out[6] = x66;
  out[7] = x69;
  out[8] = x72;
  out[9] = x75;
  out[10] = x78;
  out[11] = x81;
  out[12] = x84;
  out[13] = x87;
  out[14] = x90;
  out[15] = x93;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
