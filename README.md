# CTDL_GT_Nguyen_Tien_Dat_202514033
# Bài Tập: Cài Đặt Bài Toán Tháp Hà Nội
## 1. Diễn giải chi tiết các bước thực hiện giải thuật

### 1.1. Phương pháp Đệ quy
* **Trường hợp cơ sở (Base Case):** Khi $n = 1$, di chuyển trực tiếp 1 đĩa từ cọc nguồn sang cọc đích.
* **Trường hợp tổng quát ($n > 1$):**
  1. **Bước 1:** Gọi đệ quy chuyển $n-1$ đĩa từ cọc Nguồn sang cọc Trung gian (sử dụng cọc Đích làm cọc tạm).
  2. **Bước 2:** Chuyển đĩa thứ $n$ (đĩa lớn nhất hiện tại) trực tiếp từ cọc Nguồn sang cọc Đích.
  3. **Bước 3:** Gọi đệ quy chuyển $n-1$ đĩa từ cọc Trung gian sang cọc Đích (sử dụng cọc Nguồn làm cọc tạm).

---

## 2. Test Cases (Kiểm tra độ chính xác của giải thuật)

### Test Case 1: $n = 1$ đĩa
* **Input:** `1`
* **Output:**
```text
Chuyen dia 1 tu coc A -> coc B
```

---

### Test Case 2: $n = 3$ đĩa
* **Input:** `3`
* **Output:**
```text
Chuyen dia 1 tu coc A -> coc B
Chuyen dia 2 tu coc A -> coc C
Chuyen dia 1 tu coc B -> coc C
Chuyen dia 3 tu coc A -> coc B
Chuyen dia 1 tu coc C -> coc A
Chuyen dia 2 tu coc C -> coc B
Chuyen dia 1 tu coc A -> coc B
```
