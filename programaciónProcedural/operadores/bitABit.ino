"Y" bit a bit: &
  150 = 10010110
  209 = 11010001
  
  150 & 209 = 10010110             1  1 11
              11010001             11 1   1
              --------             --------
              10010000 = 144       10010000
  
  
"O" bit a bit: |
  150 = 10010110
  209 = 11010001
  
  150 | 209 = 10010110             1  1 11
              11010001             11 1   1
              --------             --------
              11010111 = 215       11010111


DESPLAZAMIENTO A LA IZQUIERDA DE BITS: <<
  5      = 0000000000000101
  5 << 3 = 0000000000101000 = 40
  
  
DESPLAZAMIENTO A LA DERECHA DE BITS: >>
  40      = 0000000000101000
  40 >> 3 = 0000000000000101 = 5
  
  
XOR (OR EXCLUSIVO): ^
  LOS BITS DISTINTOS DAN COMO RESULTADO 1 Y LOS BITS IGUALES DAN COMO RESULTADO 0.
  
  3 = 0011
  5 = 0101
  
  3 ^ 5 = 0011
          0101
          ----
          0110 = 6
