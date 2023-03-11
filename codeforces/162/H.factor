USING: io kernel math sequences ;
readln 0 swap [ 32 bitor 1 rot - 32 over * rot bitxor ] map print drop