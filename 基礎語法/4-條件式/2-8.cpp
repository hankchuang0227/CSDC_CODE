(true || false && false) 

//結果為真，因為 false && false 會先執行
// 得到 false，在執行 || ，true || false 為 true 因此為true。


//假如||和&&的優先權相同，剛剛的true||false就會先執行，得到true
// 接著執行true && false 得 false
// 結果完全不同，因此知道運算子的優先順序很重要
