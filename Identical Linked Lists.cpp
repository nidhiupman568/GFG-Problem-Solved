Node* h1=head1;Node* h2=head2;

    while (h1!=NULL && h2!=NULL){

        if(h1->data!=h2->data) return false;

        h1=h1->next;

        h2=h2->next;

    }

    if(h1!=NULL || h2!=NULL) return false;

    return true;
