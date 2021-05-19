bool check(Data d, Data limit_min, Data limit_max){

    if ( d.mst <= limit_max.mst && d.mst >= limit_min.mst
        && d.tmp_eq >= limit_min.tmp_eq && d.tmp_eq <= limit_max.tmp_eq
        && d.ox_mpercent >= limit_min.ox_mpercent && d.ox_mpercent <= limit_max.ox_mpercent
        && d.co2_mpercent >= limit_min.co2_mpercent && d.co2_mpercent <= limit_max.co2_mpercent
        && d.tmp_pole >= limit_min.tmp_pole && d.tmp_pole <= limit_max.tmp_pole ) return true;
    else return false;
}
