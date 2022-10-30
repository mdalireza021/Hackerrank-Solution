select e.employee_ID, e.name from employee_information as e
join last_quarter_bonus as b on b.employee_ID = e.employee_ID
where e.division like 'H%'
and b.bonus >= 5000;
