// Title        : vending_machine_def.v
// Author       : Jae-Eon Jo  (Jojaeeon@postech.ac.kr) 
//				  Dongup Kwon (nankdu7@postech.ac.kr)
//                SoonHo Kim  (rlatnsgh0708@postech.ac.kr)

// Macro constants (prefix k & CamelCase)
`define kTotalBits 32
  
`define kItemBits 8
`define kNumItems 4

`define kCoinBits 8
`define kNumCoins 3

`define kWaitTime 10

// states 정의
`define s0 2'b00 // 대기 상태
`define s1 2'b01 // 동전 입력 상태
`define s2 2'b10 // 아이템 출력 상태
`define s3 2'b11 // 동전 반환 상태
