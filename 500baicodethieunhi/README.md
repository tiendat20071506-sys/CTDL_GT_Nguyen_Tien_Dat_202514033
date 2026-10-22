
Chương trình này cho phép nhập vào một mảng số nguyên và một giá trị đích. Chương trình sẽ tìm và in ra cặp số **đầu tiên** trong mảng có tổng đúng bằng `target`.

## Giải thích thuật toán

Thuật toán được sử dụng là **Vét cạn (Brute Force)**. Chương trình duyệt qua tất cả các cặp số có thể có trong mảng để kiểm tra tổng.

1. **Sử dụng 2 vòng lặp lồng nhau:**
   - Vòng lặp ngoài `i` chạy từ phần tử đầu tiên (`0`) đến kề cuối (`n-2`).
   - Vòng lặp trong `j` chạy từ phần tử ngay sau `i` (`i + 1`) đến cuối cùng (`n-1`). Điều này giúp không lặp lại các cặp đã kiểm tra và không cộng một số với chính nó.
2. **Kiểm tra tổng:** Kiểm tra điều kiện `a[i] + a[j] == target`.
3. **Thoát sớm (Early Exit):** Nếu điều kiện đúng, in ra `Pair found` và dùng `return;` để thoát hàm ngay lập tức.
4. **Không tìm thấy:** Nếu vòng lặp kết thúc mà không có cặp nào khớp, in ra `Pair not found`.
### Đánh giá độ phức tạp:
- **Độ phức tạp thời gian:** $O(n^2)$ do sử dụng hai vòng lặp lồng nhau.
## Các Test Case mẫu

### Test Case 1: Có một cặp số thỏa mãn 
Input:
  5
  1 4 6 8 10
  14
Output:
  Pair found (4, 10)
### Test Case 2: Không có cặp số nào thỏa mãn  
Input:
  4
2 5 9 11
10
Output:
  Pair not found
  
  
