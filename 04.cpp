1. SELECT * FROM employees;
2. SELECT first_name, salary FROM employees;
3. SELECT * FROM employees WHERE salary > 5000;
4. SELECT * FROM employees WHERE first_name LIKE 'A%';
5. 
6.  
    SELECT department_id, COUNT(*) AS employee_count
    FROM employees
    GROUP BY department_id;
7.
    SELECT department_id
    FROM employees
    GROUP BY department_id
    HAVING COUNT(*) > 10;
8.
    INSERT INTO employees (employee_id, first_name, last_name, email, phone_number, hire_date, job_id, salary, commission_pct, manager_id, department_id)
    VALUES (NULL, 'Khuong', 'Pham', 'duykhuong9a@gmail.com', '1234567890', '2024-01-22', 'JOB001', 5001, NULL, 1, 1);
9. UPDATE employees SET salary = salary * 1.1;
10. DELETE FROM employees WHERE employee_id = 10;