# Tìm Mảng Con Có Chiều Dài Lớn Nhất Với Tổng Cho Trước

## Giải thích thuật toán

Chương trình sử dụng phương pháp vét cạn (Brute Force) thông qua hai vòng lặp lồng nhau để kiểm tra tất cả các mảng con có thể có:
1. Vòng lặp ngoài (`i`) xác định chỉ số bắt đầu của mảng con.
2. Vòng lặp trong (`j`) duyệt từ vị trí `i` đến cuối mảng, cộng dồn giá trị các phần tử vào biến `target`.
3. Nếu tổng `target` bằng với giá trị `S` được yêu cầu, chương trình sẽ tính chiều dài của mảng con này (`j - i + 1`).
4. Nếu chiều dài này lớn hơn chiều dài lớn nhất đã tìm được trước đó (`len`), chương trình sẽ cập nhật lại `len` và lưu giữ chỉ số kết thúc của mảng con (`ending_index`).
5. Sau khi duyệt xong, vị trí bắt đầu và kết thúc của mảng con dài nhất sẽ được in ra màn hình.

### Độ phức tạp:
- **Độ phức tạp thời gian**: O(N^2) do sử dụng hai vòng lặp lồng nhau để duyệt qua các mảng con có thể có, trong đó N là số lượng phần tử của mảng.

---

## Các Testcase Minh Họa

### Testcase 1
- **Input:**
  - Số lượng phần tử: `5`
  - Các phần tử: `1 -1 5 -2 3`
  - S: `3`
- **Output:**
  > [0, 3]

### Testcase 2
- **Input:**
  - Số lượng phần tử: `9`
  - Các phần tử: `-2 1 -3 4 -1 2 1 -5 4`
  - S: `6`
- **Output:**
  > [3, 6]