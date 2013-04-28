  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>Rdbn/src/dbn.backpropagation.c at 188e756a9c91eca30b4d0e37c20b39aafc2d94a4 · dankoc/Rdbn</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <link rel="logo" type="image/svg" href="http://github-media-downloads.s3.amazonaws.com/github-logo.svg" />
    <link rel="xhr-socket" href="/_sockets">
    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="7rceYxFgM6P2L2pNvNKFpIKiTFT9LFNNgMhmg86R71U=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/assets/github-21d1f919c9b16786238504ad1232b4937bbdd088.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/assets/github2-2be8c95d7426dd9f223af4019da16db22547f7a8.css" media="all" rel="stylesheet" type="text/css" />
    


      <script src="https://a248.e.akamai.net/assets.github.com/assets/frameworks-92d138f450f2960501e28397a2f63b0f100590f0.js" type="text/javascript"></script>
      <script src="https://a248.e.akamai.net/assets.github.com/assets/github-8b597885ade82d6a3d9108d93ea8e86b9f294d91.js" type="text/javascript"></script>
      
      <meta http-equiv="x-pjax-version" content="77a530946004f4df817ad3a299a913ed">

        <link data-pjax-transient rel='permalink' href='/dankoc/Rdbn/blob/188e756a9c91eca30b4d0e37c20b39aafc2d94a4/src/dbn.backpropagation.c'>
    <meta property="og:title" content="Rdbn"/>
    <meta property="og:type" content="githubog:gitrepository"/>
    <meta property="og:url" content="https://github.com/dankoc/Rdbn"/>
    <meta property="og:image" content="https://secure.gravatar.com/avatar/4d95a2aa7ca980af24d543997aa32add?s=420&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png"/>
    <meta property="og:site_name" content="GitHub"/>
    <meta property="og:description" content="Rdbn - Fast code to learn deep belief networks in R."/>
    <meta property="twitter:card" content="summary"/>
    <meta property="twitter:site" content="@GitHub">
    <meta property="twitter:title" content="dankoc/Rdbn"/>

    <meta name="description" content="Rdbn - Fast code to learn deep belief networks in R." />

  <link href="https://github.com/dankoc/Rdbn/commits/188e756a9c91eca30b4d0e37c20b39aafc2d94a4.atom" rel="alternate" title="Recent Commits to Rdbn:188e756a9c91eca30b4d0e37c20b39aafc2d94a4" type="application/atom+xml" />

  </head>


  <body class="logged_in page-blob windows vis-public env-production  ">
    <div id="wrapper">

      

      
      
      

      <div class="header header-logged-in true">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/">
  <span class="mega-icon mega-icon-invertocat"></span>
</a>

    <div class="divider-vertical"></div>

      <a href="/notifications" class="notification-indicator tooltipped downwards" title="You have no unread notifications">
    <span class="mail-status all-read"></span>
  </a>
  <div class="divider-vertical"></div>


      <div class="command-bar js-command-bar  ">
            <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">
  <a href="/search/advanced" class="advanced-search-icon tooltipped downwards command-bar-search" id="advanced_search" title="Advanced search"><span class="mini-icon mini-icon-advanced-search "></span></a>

  <input type="text" data-hotkey="/ s" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" data-username="dankoc" autocapitalize="off">

  <span class="mini-icon help tooltipped downwards" title="Show command bar help">
    <span class="mini-icon mini-icon-help"></span>
  </span>

  <input type="hidden" name="ref" value="cmdform">

    <input type="hidden" class="js-repository-name-with-owner" value="dankoc/Rdbn"/>
    <input type="hidden" class="js-repository-branch" value=""/>
    <input type="hidden" class="js-repository-tree-sha" value="f0242484ff4450a08ba19aaf9b5af08c785921ef"/>

  <div class="divider-vertical"></div>
</form>
        <ul class="top-nav">
            <li class="explore"><a href="https://github.com/explore">Explore</a></li>
            <li><a href="https://gist.github.com">Gist</a></li>
            <li><a href="/blog">Blog</a></li>
          <li><a href="http://help.github.com">Help</a></li>
        </ul>
      </div>

    

  

    <ul id="user-links">
      <li>
        <a href="https://github.com/dankoc" class="name">
          <img height="20" src="https://secure.gravatar.com/avatar/4d95a2aa7ca980af24d543997aa32add?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="20" /> dankoc
        </a>
      </li>

        <li>
          <a href="/new" id="new_repo" class="tooltipped downwards" title="Create a new repo">
            <span class="mini-icon mini-icon-create"></span>
          </a>
        </li>

        <li>
          <a href="/settings/profile" id="account_settings"
            class="tooltipped downwards"
            title="Account settings ">
            <span class="mini-icon mini-icon-account-settings"></span>
          </a>
        </li>
        <li>
          <a class="tooltipped downwards" href="/logout" data-method="post" id="logout" title="Sign out">
            <span class="mini-icon mini-icon-logout"></span>
          </a>
        </li>

    </ul>


<div class="js-new-dropdown-contents hidden">
  <ul class="dropdown-menu">
    <li>
      <a href="/new"><span class="mini-icon mini-icon-create"></span> New repository</a>
    </li>
    <li>
        <a href="https://github.com/dankoc/Rdbn/issues/new"><span class="mini-icon mini-icon-issue-opened"></span> New issue</a>
    </li>
    <li>
    </li>
    <li>
      <a href="/organizations/new"><span class="mini-icon mini-icon-u-list"></span> New organization</a>
    </li>
  </ul>
</div>


    
  </div>
</div>

      

      

      


            <div class="site hfeed" itemscope itemtype="http://schema.org/WebPage">
      <div class="hentry">
        
        <div class="pagehead repohead instapaper_ignore readability-menu ">
          <div class="container">
            <div class="title-actions-bar">
              

<ul class="pagehead-actions">

    <li class="nspr">
      <a href="/dankoc/Rdbn/pull/new/188e756a9c91eca30b4d0e37c20b39aafc2d94a4" class="button minibutton btn-pull-request" icon_class="mini-icon-pull-request"><span class="mini-icon mini-icon-pull-request"></span>Pull Request</a>
    </li>

    <li class="subscription">
      <form accept-charset="UTF-8" action="/notifications/subscribe" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="7rceYxFgM6P2L2pNvNKFpIKiTFT9LFNNgMhmg86R71U=" /></div>  <input id="repository_id" name="repository_id" type="hidden" value="8807042" />

    <div class="select-menu js-menu-container js-select-menu">
      <span class="minibutton select-menu-button js-menu-target">
        <span class="js-select-button">
          <span class="mini-icon mini-icon-unwatch"></span>
          Unwatch
        </span>
      </span>

      <div class="select-menu-modal-holder js-menu-content">
        <div class="select-menu-modal">
          <div class="select-menu-header">
            <span class="select-menu-title">Notification status</span>
            <span class="mini-icon mini-icon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-list js-navigation-container">

            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
              <div class="select-menu-item-text">
                <input id="do_included" name="do" type="radio" value="included" />
                <h4>Not watching</h4>
                <span class="description">You only receive notifications for discussions in which you participate or are @mentioned.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="mini-icon mini-icon-watching"></span>
                  Watch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item selected">
              <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
              <div class="select-menu-item-text">
                <input checked="checked" id="do_subscribed" name="do" type="radio" value="subscribed" />
                <h4>Watching</h4>
                <span class="description">You receive notifications for all discussions in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="mini-icon mini-icon-unwatch"></span>
                  Unwatch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
              <div class="select-menu-item-text">
                <input id="do_ignore" name="do" type="radio" value="ignore" />
                <h4>Ignoring</h4>
                <span class="description">You do not receive any notifications for discussions in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="mini-icon mini-icon-mute"></span>
                  Stop ignoring
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

</form>
    </li>

    <li class="js-toggler-container js-social-container starring-container ">
      <a href="/dankoc/Rdbn/unstar" class="minibutton js-toggler-target star-button starred upwards" title="Unstar this repo" data-remote="true" data-method="post" rel="nofollow">
        <span class="mini-icon mini-icon-remove-star"></span>
        <span class="text">Unstar</span>
      </a>
      <a href="/dankoc/Rdbn/star" class="minibutton js-toggler-target star-button unstarred upwards" title="Star this repo" data-remote="true" data-method="post" rel="nofollow">
        <span class="mini-icon mini-icon-star"></span>
        <span class="text">Star</span>
      </a>
      <a class="social-count js-social-count" href="/dankoc/Rdbn/stargazers">0</a>
    </li>

        <li>
          <a href="/dankoc/Rdbn/fork" class="minibutton js-toggler-target fork-button lighter upwards" title="Fork this repo" rel="nofollow" data-method="post">
            <span class="mini-icon mini-icon-branch-create"></span>
            <span class="text">Fork</span>
          </a>
          <a href="/dankoc/Rdbn/network" class="social-count">0</a>
        </li>


</ul>

              <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
                <span class="repo-label"><span>public</span></span>
                <span class="mega-icon mega-icon-public-repo"></span>
                <span class="author vcard">
                  <a href="/dankoc" class="url fn" itemprop="url" rel="author">
                  <span itemprop="title">dankoc</span>
                  </a></span> /
                <strong><a href="/dankoc/Rdbn" class="js-current-repository">Rdbn</a></strong>
              </h1>
            </div>

            
  <ul class="tabs">
    <li class="pulse-nav"><a href="/dankoc/Rdbn/pulse" highlight="pulse" rel="nofollow"><span class="mini-icon mini-icon-pulse"></span></a></li>
    <li><a href="/dankoc/Rdbn" class="selected" highlight="repo_source repo_downloads repo_commits repo_tags repo_branches">Code</a></li>
    <li><a href="/dankoc/Rdbn/network" highlight="repo_network">Network</a></li>
    <li><a href="/dankoc/Rdbn/pulls" highlight="repo_pulls">Pull Requests <span class='counter'>0</span></a></li>

      <li><a href="/dankoc/Rdbn/issues" highlight="repo_issues">Issues <span class='counter'>0</span></a></li>

      <li><a href="/dankoc/Rdbn/wiki" highlight="repo_wiki">Wiki</a></li>


    <li><a href="/dankoc/Rdbn/graphs" highlight="repo_graphs repo_contributors">Graphs</a></li>

      <li>
        <a href="/dankoc/Rdbn/settings">Settings</a>
      </li>

  </ul>
  
<div class="tabnav">

  <span class="tabnav-right">
    <ul class="tabnav-tabs">
          <li><a href="/dankoc/Rdbn/tags" class="tabnav-tab" highlight="repo_tags">Tags <span class="counter blank">0</span></a></li>
    </ul>
    
  </span>

  <div class="tabnav-widget scope">


    <div class="select-menu js-menu-container js-select-menu js-branch-menu">
      <a class="minibutton select-menu-button js-menu-target" data-hotkey="w" data-ref="">
        <span class="mini-icon mini-icon-tree"></span>
        <i>tree:</i>
        <span class="js-select-button">188e756a9c</span>
      </a>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container">

        <div class="select-menu-modal">
          <div class="select-menu-header">
            <span class="select-menu-title">Switch branches/tags</span>
            <span class="mini-icon mini-icon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-filters">
            <div class="select-menu-text-filter">
              <input type="text" id="commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Find or create a branch…">
            </div>
            <div class="select-menu-tabs">
              <ul>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
                </li>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
                </li>
              </ul>
            </div><!-- /.select-menu-tabs -->
          </div><!-- /.select-menu-filters -->

          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="branches">

            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon mini-icon mini-icon-confirm"></span>
                  <a href="/dankoc/Rdbn/blob/master/src/dbn.backpropagation.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="master" rel="nofollow" title="master">master</a>
                </div> <!-- /.select-menu-item -->
            </div>

              <form accept-charset="UTF-8" action="/dankoc/Rdbn/branches" class="js-create-branch select-menu-item select-menu-new-item-form js-navigation-item js-new-item-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="7rceYxFgM6P2L2pNvNKFpIKiTFT9LFNNgMhmg86R71U=" /></div>

                <span class="mini-icon mini-icon-branch-create select-menu-item-icon"></span>
                <div class="select-menu-item-text">
                  <h4>Create branch: <span class="js-new-item-name"></span></h4>
                  <span class="description">from ‘188e756a9c91eca30b4d0e37c20b39aafc2d94a4’</span>
                </div>
                <input type="hidden" name="name" id="name" class="js-new-item-value">
                <input type="hidden" name="branch" id="branch" value="188e756a9c91eca30b4d0e37c20b39aafc2d94a4" />
                <input type="hidden" name="path" id="branch" value="src/dbn.backpropagation.c" />
              </form> <!-- /.select-menu-item -->

          </div> <!-- /.select-menu-list -->


          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="tags">
            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

            </div>

            <div class="select-menu-no-results">Nothing to show</div>

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

  </div> <!-- /.scope -->

  <ul class="tabnav-tabs">
    <li><a href="/dankoc/Rdbn" class="selected tabnav-tab" highlight="repo_source">Files</a></li>
    <li><a href="/dankoc/Rdbn/commits/" class="tabnav-tab" highlight="repo_commits">Commits</a></li>
    <li><a href="/dankoc/Rdbn/branches" class="tabnav-tab" highlight="repo_branches" rel="nofollow">Branches <span class="counter ">1</span></a></li>
  </ul>

</div>

  
  
  


            
          </div>
        </div><!-- /.repohead -->

        <div id="js-repo-pjax-container" class="container context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:adb3535126c2f55c3d933389a27833e9 -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:adb3535126c2f55c3d933389a27833e9 -->


<div id="slider">
    <div class="frame-meta">

      <p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

        <div class="breadcrumb">
          <span class='bold'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/dankoc/Rdbn/tree/188e756a9c91eca30b4d0e37c20b39aafc2d94a4" class="js-slide-to" data-branch="188e756a9c91eca30b4d0e37c20b39aafc2d94a4" data-direction="back" itemscope="url" rel="nofollow"><span itemprop="title">Rdbn</span></a></span></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/dankoc/Rdbn/tree/188e756a9c91eca30b4d0e37c20b39aafc2d94a4/src" class="js-slide-to" data-branch="188e756a9c91eca30b4d0e37c20b39aafc2d94a4" data-direction="back" itemscope="url" rel="nofollow"><span itemprop="title">src</span></a></span><span class="separator"> / </span><strong class="final-path">dbn.backpropagation.c</strong> <span class="js-zeroclipboard zeroclipboard-button" data-clipboard-text="src/dbn.backpropagation.c" data-copied-hint="copied!" title="copy to clipboard"><span class="mini-icon mini-icon-clipboard"></span></span>
        </div>

      <a href="/dankoc/Rdbn/find/188e756a9c91eca30b4d0e37c20b39aafc2d94a4" class="js-slide-to" data-hotkey="t" style="display:none">Show File Finder</a>


        <div class="commit commit-loader file-history-tease js-deferred-content" data-url="/dankoc/Rdbn/contributors/188e756a9c91eca30b4d0e37c20b39aafc2d94a4/src/dbn.backpropagation.c">
          Fetching contributors…

          <div class="participation">
            <p class="loader-loading"><img alt="Octocat-spinner-32-eaf2f5" height="16" src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-32-EAF2F5.gif?1338956357" width="16" /></p>
            <p class="loader-error">Cannot retrieve contributors at this time</p>
          </div>
        </div>

    </div><!-- ./.frame-meta -->

    <div class="frames">
      <div class="frame" data-permalink-url="/dankoc/Rdbn/blob/188e756a9c91eca30b4d0e37c20b39aafc2d94a4/src/dbn.backpropagation.c" data-title="Rdbn/src/dbn.backpropagation.c at 188e756a9c91eca30b4d0e37c20b39aafc2d94a4 · dankoc/Rdbn · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="mini-icon mini-icon-text-file"></b></span>
                <span class="mode" title="File Mode">file</span>
                  <span>288 lines (242 sloc)</span>
                <span>11.907 kb</span>
              </div>
              <div class="actions">
                <div class="button-group">
                      <a class="minibutton js-entice" href=""
                         data-entice="You must be signed in and on a branch to make or propose changes">Edit</a>
                  <a href="/dankoc/Rdbn/raw/188e756a9c91eca30b4d0e37c20b39aafc2d94a4/src/dbn.backpropagation.c" class="button minibutton " id="raw-url">Raw</a>
                    <a href="/dankoc/Rdbn/blame/188e756a9c91eca30b4d0e37c20b39aafc2d94a4/src/dbn.backpropagation.c" class="button minibutton ">Blame</a>
                  <a href="/dankoc/Rdbn/commits/188e756a9c91eca30b4d0e37c20b39aafc2d94a4/src/dbn.backpropagation.c" class="button minibutton " rel="nofollow">History</a>
                </div><!-- /.button-group -->
              </div><!-- /.actions -->

            </div>
                <div class="blob-wrapper data type-c js-blob-data">
      <table class="file-code file-diff">
        <tr class="file-code-line">
          <td class="blob-line-nums">
            <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>

          </td>
          <td class="blob-line-code">
                  <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm"> * dbn.backpropagation.c -- This file implements the backpropagation algorithm</span></div><div class='line' id='LC3'><span class="cm"> *                          to refine deep belief networks.</span></div><div class='line' id='LC4'><span class="cm"> *</span></div><div class='line' id='LC5'><span class="cm"> */</span></div><div class='line' id='LC6'><span class="cp">#include &lt;R.h&gt;</span></div><div class='line' id='LC7'><span class="cp">#include &lt;Rdefines.h&gt;</span></div><div class='line' id='LC8'><span class="cp">#include &lt;Rmath.h&gt;</span></div><div class='line' id='LC9'><span class="cp">#include &lt;Rinternals.h&gt;</span></div><div class='line' id='LC10'><span class="cp">#include &lt;R_ext/Rdynload.h&gt;</span></div><div class='line' id='LC11'><span class="cp">#include &lt;R_ext/Applic.h&gt;</span></div><div class='line' id='LC12'><span class="cp">#include &lt;pthread.h&gt;</span></div><div class='line' id='LC13'><span class="cp">#include &quot;dbn.h&quot;</span></div><div class='line' id='LC14'><span class="cp">#include &quot;dbn.backpropagation.h&quot;</span></div><div class='line' id='LC15'><span class="cp">#include &quot;rbm.h&quot;</span></div><div class='line' id='LC16'><span class="cp">#include &quot;matrix_functions.h&quot;</span></div><div class='line' id='LC17'><br/></div><div class='line' id='LC18'><br/></div><div class='line' id='LC19'><span class="cm">/* </span></div><div class='line' id='LC20'><span class="cm"> * Takes the sum of two delta_w_t variables, batch and dw.  Sum returned in batch. </span></div><div class='line' id='LC21'><span class="cm"> *</span></div><div class='line' id='LC22'><span class="cm"> * Previously defined in rbm.c.  Here needed just for backprop.</span></div><div class='line' id='LC23'><span class="cm"> */</span></div><div class='line' id='LC24'><span class="k">static</span> <span class="kr">inline</span> <span class="kt">void</span> <span class="nf">sum_delta_w</span><span class="p">(</span><span class="kt">delta_w_t</span> <span class="o">*</span><span class="n">batch</span><span class="p">,</span> <span class="kt">delta_w_t</span> <span class="o">*</span><span class="n">dw</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC25'>&nbsp;&nbsp;<span class="n">matrix_sum</span><span class="p">(</span><span class="n">batch</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">delta_w</span><span class="p">,</span> <span class="n">dw</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">delta_w</span><span class="p">);</span></div><div class='line' id='LC26'>&nbsp;&nbsp;<span class="n">vector_sum</span><span class="p">(</span><span class="n">batch</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">delta_output_bias</span><span class="p">,</span> <span class="n">dw</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">delta_output_bias</span><span class="p">,</span> <span class="n">batch</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">delta_w</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">ncols</span><span class="p">);</span></div><div class='line' id='LC27'>&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">batch</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">input_bias_allocated</span> <span class="o">&amp;&amp;</span> <span class="n">dw</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">input_bias_allocated</span><span class="p">)</span></div><div class='line' id='LC28'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">vector_sum</span><span class="p">(</span><span class="n">batch</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">delta_input_bias</span><span class="p">,</span> <span class="n">dw</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">delta_input_bias</span><span class="p">,</span> <span class="n">batch</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">delta_w</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">nrows</span><span class="p">);</span></div><div class='line' id='LC29'><span class="p">}</span></div><div class='line' id='LC30'><br/></div><div class='line' id='LC31'><br/></div><div class='line' id='LC32'><br/></div><div class='line' id='LC33'><span class="cm">/****************************************************************************</span></div><div class='line' id='LC34'><span class="cm"> *</span></div><div class='line' id='LC35'><span class="cm"> * Backpropagation.</span></div><div class='line' id='LC36'><span class="cm"> * </span></div><div class='line' id='LC37'><span class="cm"> * After initial training, backpropagation is used to refine the network</span></div><div class='line' id='LC38'><span class="cm"> * for descriminitive classification.</span></div><div class='line' id='LC39'><span class="cm"> *</span></div><div class='line' id='LC40'><span class="cm"> * Took most info from Hinton&#39;s Coursea lecture on backpropagation ... Last slide in lecture 3d.</span></div><div class='line' id='LC41'><span class="cm"> * Here: https://d396qusza40orc.cloudfront.net/neuralnets/lecture_slides%2Flec3.pdf</span></div><div class='line' id='LC42'><span class="cm"> * (NOTE: May require Couresea account).</span></div><div class='line' id='LC43'><span class="cm"> */</span></div><div class='line' id='LC44'><br/></div><div class='line' id='LC45'>&nbsp;</div><div class='line' id='LC46'><span class="k">static</span> <span class="kr">inline</span> <span class="kt">double</span> <span class="o">**</span><span class="nf">dbn_compute_store_layers</span><span class="p">(</span><span class="kt">dbn_t</span> <span class="o">*</span><span class="n">dbn</span><span class="p">,</span> <span class="kt">double</span> <span class="o">*</span><span class="n">input</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC47'>&nbsp;&nbsp;<span class="kt">double</span> <span class="o">**</span><span class="n">layer_output</span><span class="o">=</span> <span class="p">(</span><span class="kt">double</span><span class="o">**</span><span class="p">)</span><span class="n">Calloc</span><span class="p">(</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_layers</span><span class="p">,</span><span class="kt">double</span><span class="o">*</span><span class="p">);</span></div><div class='line' id='LC48'>&nbsp;&nbsp;<span class="n">layer_output</span><span class="p">[</span><span class="mi">0</span><span class="p">]</span><span class="o">=</span> <span class="n">vector_copy</span><span class="p">(</span><span class="n">input</span><span class="p">,</span> <span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_inputs</span><span class="p">);</span></div><div class='line' id='LC49'>&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_rbms</span><span class="p">;</span><span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC50'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">layer_output</span><span class="p">[</span><span class="n">i</span><span class="o">+</span><span class="mi">1</span><span class="p">]</span><span class="o">=</span> <span class="n">get_layer_outputs</span><span class="p">(</span><span class="n">dbn</span><span class="p">,</span> <span class="n">i</span><span class="p">,</span> <span class="n">layer_output</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC51'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC52'>&nbsp;&nbsp;<span class="k">return</span><span class="p">(</span><span class="n">layer_output</span><span class="p">);</span></div><div class='line' id='LC53'><span class="p">}</span></div><div class='line' id='LC54'><br/></div><div class='line' id='LC55'><span class="k">static</span> <span class="kr">inline</span> <span class="kt">void</span> <span class="nf">compute_layer_error</span><span class="p">(</span><span class="kt">dbn_t</span> <span class="o">*</span><span class="n">dbn</span><span class="p">,</span> <span class="kt">int</span> <span class="n">layer</span><span class="p">,</span> <span class="kt">double</span> <span class="o">**</span><span class="n">observed_output</span><span class="p">,</span> <span class="kt">double</span> <span class="o">*</span><span class="n">neuron_error</span><span class="p">,</span> <span class="kt">double</span> <span class="o">*</span><span class="n">next_layer_neuron_error</span><span class="p">,</span> <span class="kt">delta_w_t</span> <span class="o">*</span><span class="n">batch</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC56'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">n_outputs_cl</span><span class="o">=</span> <span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">rbms</span><span class="p">[</span><span class="n">layer</span><span class="p">].</span><span class="n">n_outputs</span><span class="p">;</span> <span class="c1">// # outputs in current layer</span></div><div class='line' id='LC57'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">n_inputs_cl</span><span class="o">=</span> <span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">rbms</span><span class="p">[</span><span class="n">layer</span><span class="p">].</span><span class="n">n_inputs</span><span class="p">;</span>   <span class="c1">// # inputs in current layer</span></div><div class='line' id='LC58'><br/></div><div class='line' id='LC59'>&nbsp;&nbsp;<span class="c1">// Compute error for this layer.</span></div><div class='line' id='LC60'>&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span><span class="n">n_inputs_cl</span><span class="p">;</span><span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC61'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">layer</span><span class="o">&gt;</span><span class="mi">0</span><span class="p">)</span> <span class="n">next_layer_neuron_error</span><span class="p">[</span><span class="n">i</span><span class="p">]</span><span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC62'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">j</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">j</span><span class="o">&lt;</span><span class="n">n_outputs_cl</span><span class="p">;</span><span class="n">j</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC63'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// Compute error derivites for the weights ... (dE/w_{i,j}).</span></div><div class='line' id='LC64'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">double</span> <span class="n">previous_ij</span><span class="o">=</span> <span class="n">get_matrix_value</span><span class="p">(</span><span class="n">batch</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">delta_w</span><span class="p">,</span> <span class="n">j</span><span class="p">,</span> <span class="n">i</span><span class="p">);</span></div><div class='line' id='LC65'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">set_matrix_value</span><span class="p">(</span><span class="n">batch</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">delta_w</span><span class="p">,</span> <span class="n">j</span><span class="p">,</span> <span class="n">i</span><span class="p">,</span> <span class="n">previous_ij</span><span class="o">+</span><span class="n">observed_output</span><span class="p">[</span><span class="n">layer</span><span class="p">][</span><span class="n">i</span><span class="p">]</span><span class="o">*</span><span class="n">neuron_error</span><span class="p">[</span><span class="n">j</span><span class="p">]);</span> </div><div class='line' id='LC66'><br/></div><div class='line' id='LC67'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// Compute error derivites for the biases.  Conceptually similar to a connection with a neuron of constant output (==1).</span></div><div class='line' id='LC68'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// see: http://stackoverflow.com/questions/3775032/how-to-update-the-bias-in-neural-network-backpropagation.</span></div><div class='line' id='LC69'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">i</span><span class="o">==</span><span class="mi">0</span><span class="p">)</span> <span class="n">batch</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">delta_output_bias</span><span class="p">[</span><span class="n">j</span><span class="p">]</span><span class="o">+=</span> <span class="n">neuron_error</span><span class="p">[</span><span class="n">j</span><span class="p">];</span> <span class="c1">//*observed_output (==DEFINED_AS== 1);</span></div><div class='line' id='LC70'>&nbsp;&nbsp;</div><div class='line' id='LC71'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// Compute error for neurons in an internal &#39;hidden&#39; layer [dE/dy_{i}].</span></div><div class='line' id='LC72'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// dE/dy_{i} = \sum_j w_{i,j}* dE/dz_{j}; where j= \set(outputs); i= \set(inputs).</span></div><div class='line' id='LC73'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">layer</span><span class="o">&gt;</span><span class="mi">0</span><span class="p">)</span> <span class="c1">// No need to compute in the last layer.</span></div><div class='line' id='LC74'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">next_layer_neuron_error</span><span class="p">[</span><span class="n">i</span><span class="p">]</span><span class="o">+=</span> <span class="n">neuron_error</span><span class="p">[</span><span class="n">j</span><span class="p">]</span><span class="o">*</span><span class="n">get_matrix_value</span><span class="p">(</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">rbms</span><span class="p">[</span><span class="n">layer</span><span class="p">].</span><span class="n">io_weights</span><span class="p">,</span> <span class="n">j</span><span class="p">,</span> <span class="n">i</span><span class="p">);</span></div><div class='line' id='LC75'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC76'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC77'><span class="p">}</span></div><div class='line' id='LC78'>&nbsp;</div><div class='line' id='LC79'><span class="cm">/* Returns the error derivitives for a particular example.  Equilavent to do_batch_member in rbm.c. */</span></div><div class='line' id='LC80'><span class="k">static</span> <span class="kr">inline</span> <span class="kt">void</span> <span class="nf">backpropagation</span><span class="p">(</span><span class="kt">dbn_t</span> <span class="o">*</span><span class="n">dbn</span><span class="p">,</span> <span class="kt">double</span> <span class="o">*</span><span class="n">input</span><span class="p">,</span> <span class="kt">double</span> <span class="o">*</span><span class="n">expected_output</span><span class="p">,</span> <span class="kt">delta_w_t</span> <span class="o">*</span><span class="n">batch</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC81'>&nbsp;&nbsp;<span class="kt">double</span> <span class="o">**</span><span class="n">observed_output</span><span class="o">=</span> <span class="n">dbn_compute_store_layers</span><span class="p">(</span><span class="n">dbn</span><span class="p">,</span> <span class="n">input</span><span class="p">);</span> <span class="c1">// Compute the output of the neural network.</span></div><div class='line' id='LC82'>&nbsp;&nbsp;<span class="kt">double</span> <span class="o">*</span><span class="n">next_layer_neuron_error</span><span class="p">,</span> <span class="o">*</span><span class="n">neuron_error</span><span class="p">;</span> <span class="c1">// Stores dE/dz.</span></div><div class='line' id='LC83'>&nbsp;&nbsp;</div><div class='line' id='LC84'>&nbsp;&nbsp;<span class="c1">// Compute last layer error term: dE/dz_j= y_j * (1-y_j) * dE/dy_j</span></div><div class='line' id='LC85'>&nbsp;&nbsp;<span class="c1">// Where dE/dy_j= (t_j-y_j) ==&gt; t --&gt; target output.  y--&gt; observed output.</span></div><div class='line' id='LC86'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">n_outputs_ll</span><span class="o">=</span> <span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_outputs</span><span class="p">;</span> <span class="c1">// n_outputs in the last layer.</span></div><div class='line' id='LC87'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">layer_index</span><span class="o">=</span> <span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_layers</span><span class="o">-</span><span class="mi">1</span><span class="p">;</span> <span class="c1">// Index of the layer in the double **.</span></div><div class='line' id='LC88'><br/></div><div class='line' id='LC89'>&nbsp;&nbsp;<span class="n">neuron_error</span><span class="o">=</span> <span class="p">(</span><span class="kt">double</span><span class="o">*</span><span class="p">)</span><span class="n">Calloc</span><span class="p">(</span><span class="n">n_outputs_ll</span><span class="p">,</span><span class="kt">double</span><span class="p">);</span></div><div class='line' id='LC90'>&nbsp;&nbsp;</div><div class='line' id='LC91'>&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">j</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">j</span><span class="o">&lt;</span><span class="n">n_outputs_ll</span><span class="p">;</span><span class="n">j</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span><span class="c1">// Foreach neuron in the output layer.</span></div><div class='line' id='LC92'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">double</span> <span class="n">oo</span><span class="o">=</span> <span class="n">observed_output</span><span class="p">[</span><span class="n">layer_index</span><span class="p">][</span><span class="n">j</span><span class="p">];</span></div><div class='line' id='LC93'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">neuron_error</span><span class="p">[</span><span class="n">j</span><span class="p">]</span><span class="o">=</span> <span class="n">oo</span><span class="o">*</span><span class="p">(</span><span class="mi">1</span><span class="o">-</span><span class="n">oo</span><span class="p">)</span><span class="o">*</span><span class="p">(</span><span class="o">-</span><span class="mi">1</span><span class="p">)</span><span class="o">*</span><span class="p">(</span><span class="n">oo</span><span class="o">-</span><span class="n">expected_output</span><span class="p">[</span><span class="n">j</span><span class="p">]);</span> <span class="c1">// Compute dE/dz_j</span></div><div class='line' id='LC94'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC95'>&nbsp;&nbsp;</div><div class='line' id='LC96'>&nbsp;&nbsp;<span class="c1">// Makes a single pass over the entire deep belief network.</span></div><div class='line' id='LC97'>&nbsp;&nbsp;<span class="c1">// Foreach layer, compute the layer&#39;s weight error derivitives (dE/dw) and the next neuron output error term (dE/dz).</span></div><div class='line' id='LC98'>&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">layer</span><span class="o">=</span><span class="p">(</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_rbms</span><span class="o">-</span><span class="mi">1</span><span class="p">);</span><span class="n">layer</span><span class="o">&gt;=</span><span class="mi">0</span><span class="p">;</span><span class="n">layer</span><span class="o">--</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC99'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">n_inputs_cl</span><span class="o">=</span> <span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">rbms</span><span class="p">[</span><span class="n">layer</span><span class="p">].</span><span class="n">n_inputs</span><span class="p">;</span>   <span class="c1">// # inputs in current layer</span></div><div class='line' id='LC100'><br/></div><div class='line' id='LC101'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">layer</span><span class="o">&gt;</span><span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC102'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">next_layer_neuron_error</span><span class="o">=</span> <span class="p">(</span><span class="kt">double</span><span class="o">*</span><span class="p">)</span><span class="n">Calloc</span><span class="p">(</span><span class="n">n_inputs_cl</span><span class="p">,</span><span class="kt">double</span><span class="p">);</span></div><div class='line' id='LC103'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC104'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">compute_layer_error</span><span class="p">(</span><span class="n">dbn</span><span class="p">,</span> <span class="n">layer</span><span class="p">,</span> <span class="n">observed_output</span><span class="p">,</span> <span class="n">neuron_error</span><span class="p">,</span> <span class="n">next_layer_neuron_error</span><span class="p">,</span> <span class="o">&amp;</span><span class="p">(</span><span class="n">batch</span><span class="p">[</span><span class="n">layer</span><span class="p">]));</span> </div><div class='line' id='LC105'><br/></div><div class='line' id='LC106'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Free</span><span class="p">(</span><span class="n">neuron_error</span><span class="p">);</span></div><div class='line' id='LC107'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">layer</span><span class="o">&gt;</span><span class="mi">0</span><span class="p">)</span> <span class="n">neuron_error</span><span class="o">=</span> <span class="n">next_layer_neuron_error</span><span class="p">;</span></div><div class='line' id='LC108'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC109'>&nbsp;&nbsp;</div><div class='line' id='LC110'>&nbsp;&nbsp;<span class="c1">// Free temporary storage ...</span></div><div class='line' id='LC111'>&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_layers</span><span class="p">;</span><span class="n">i</span><span class="o">++</span><span class="p">)</span></div><div class='line' id='LC112'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Free</span><span class="p">(</span><span class="n">observed_output</span><span class="p">[</span><span class="n">i</span><span class="p">]);</span></div><div class='line' id='LC113'>&nbsp;&nbsp;<span class="n">Free</span><span class="p">(</span><span class="n">observed_output</span><span class="p">);</span></div><div class='line' id='LC114'><span class="p">}</span></div><div class='line' id='LC115'><br/></div><div class='line' id='LC116'><span class="kt">void</span> <span class="o">*</span><span class="nf">dbn_backprop_partial_minibatch</span><span class="p">(</span><span class="kt">void</span> <span class="o">*</span><span class="n">ptab</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC117'>&nbsp;&nbsp;<span class="kt">dbn_pthread_arg_t</span> <span class="o">*</span><span class="n">pta</span><span class="o">=</span> <span class="p">(</span><span class="kt">dbn_pthread_arg_t</span><span class="o">*</span><span class="p">)</span><span class="n">ptab</span><span class="p">;</span></div><div class='line' id='LC118'>&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span><span class="n">pta</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">do_n_elements</span><span class="p">;</span><span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC119'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">backpropagation</span><span class="p">(</span><span class="n">pta</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">dbn</span><span class="p">,</span> <span class="n">pta</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">input</span><span class="p">,</span> <span class="n">pta</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">expected_output</span><span class="p">,</span> <span class="n">pta</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">batch</span><span class="p">);</span></div><div class='line' id='LC120'><br/></div><div class='line' id='LC121'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// Increment pointers.</span></div><div class='line' id='LC122'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pta</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">input</span><span class="o">+=</span> <span class="n">pta</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_inputs</span><span class="p">;</span></div><div class='line' id='LC123'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pta</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">expected_output</span><span class="o">+=</span> <span class="n">pta</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_outputs</span><span class="p">;</span></div><div class='line' id='LC124'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC125'><span class="p">}</span></div><div class='line' id='LC126'><br/></div><div class='line' id='LC127'><span class="c1">/////////////IF NO PTREADS, USE THIS. ///////////////////////////////////////////////</span></div><div class='line' id='LC128'><span class="cm">/* Runs the backpropagation algorithm over each element of a mini-batch. */</span></div><div class='line' id='LC129'><span class="kt">void</span> <span class="nf">backpropagation_minibatch</span><span class="p">(</span><span class="kt">dbn_t</span> <span class="o">*</span><span class="n">dbn</span><span class="p">,</span> <span class="kt">double</span> <span class="o">*</span><span class="n">input</span><span class="p">,</span> <span class="kt">double</span> <span class="o">*</span><span class="n">expected_output</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC130'>&nbsp;&nbsp;<span class="kt">dbn_pthread_arg_t</span> <span class="n">pta</span><span class="p">;</span></div><div class='line' id='LC131'>&nbsp;&nbsp;<span class="n">pta</span><span class="p">.</span><span class="n">dbn</span><span class="o">=</span> <span class="n">dbn</span><span class="p">;</span></div><div class='line' id='LC132'>&nbsp;&nbsp;<span class="n">pta</span><span class="p">.</span><span class="n">input</span><span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC133'>&nbsp;&nbsp;<span class="n">pta</span><span class="p">.</span><span class="n">expected_output</span><span class="o">=</span> <span class="n">expected_output</span><span class="p">;</span></div><div class='line' id='LC134'>&nbsp;&nbsp;<span class="n">pta</span><span class="p">.</span><span class="n">do_n_elements</span><span class="o">=</span> <span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">batch_size</span><span class="p">;</span></div><div class='line' id='LC135'>&nbsp;&nbsp;<span class="n">pta</span><span class="p">.</span><span class="n">batch</span><span class="o">=</span> <span class="n">alloc_dwt_from_dbn</span><span class="p">(</span><span class="n">dbn</span><span class="p">);</span></div><div class='line' id='LC136'>&nbsp;&nbsp;<span class="n">dbn_backprop_partial_minibatch</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pta</span><span class="p">);</span></div><div class='line' id='LC137'>&nbsp;&nbsp;</div><div class='line' id='LC138'>&nbsp;&nbsp;<span class="c1">// Update the weights.</span></div><div class='line' id='LC139'>&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_rbms</span><span class="p">;</span><span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC140'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">apply_delta_w</span><span class="p">(</span><span class="o">&amp;</span><span class="p">(</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">rbms</span><span class="p">[</span><span class="n">i</span><span class="p">]),</span> <span class="o">&amp;</span><span class="p">(</span><span class="n">pta</span><span class="p">.</span><span class="n">batch</span><span class="p">[</span><span class="n">i</span><span class="p">]));</span></div><div class='line' id='LC141'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC142'>&nbsp;&nbsp;<span class="n">free_delta_w_ptr</span><span class="p">(</span><span class="n">pta</span><span class="p">.</span><span class="n">batch</span><span class="p">,</span> <span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_rbms</span><span class="p">);</span></div><div class='line' id='LC143'><span class="p">}</span></div><div class='line' id='LC144'><span class="c1">/////////////\IF NO PTREADS, USE THIS. ///////////////////////////////////////////////</span></div><div class='line' id='LC145'><br/></div><div class='line' id='LC146'><span class="c1">/////////////IF PTREADS, USE THIS. ///////////////////////////////////////////////</span></div><div class='line' id='LC147'><span class="cm">/* Runs the backpropagation algorithm over each element of a mini-batch. */</span></div><div class='line' id='LC148'><span class="kt">void</span> <span class="nf">backpropagation_minibatch_pthreads</span><span class="p">(</span><span class="kt">dbn_t</span> <span class="o">*</span><span class="n">dbn</span><span class="p">,</span> <span class="kt">double</span> <span class="o">*</span><span class="n">input</span><span class="p">,</span> <span class="kt">double</span> <span class="o">*</span><span class="n">expected_output</span><span class="p">,</span> <span class="kt">int</span> <span class="n">n_threads</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC149'><br/></div><div class='line' id='LC150'>&nbsp;&nbsp;<span class="c1">// If using a momentum, take a step first.</span></div><div class='line' id='LC151'>&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_rbms</span><span class="p">;</span><span class="n">i</span><span class="o">++</span><span class="p">)</span></div><div class='line' id='LC152'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">rbms</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">use_momentum</span><span class="p">)</span> <span class="c1">// dbn[0] could result in a segfault, if it disagrees w/ rbm (b/c it won&#39;t be init.).</span></div><div class='line' id='LC153'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">initial_momentum_step</span><span class="p">(</span><span class="o">&amp;</span><span class="p">(</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">rbms</span><span class="p">[</span><span class="n">i</span><span class="p">]));</span></div><div class='line' id='LC154'><br/></div><div class='line' id='LC155'>&nbsp;&nbsp;<span class="c1">// If more threads than batch members, just assign each batch member to a spearate thread.</span></div><div class='line' id='LC156'>&nbsp;&nbsp;<span class="n">n_threads</span><span class="o">=</span> <span class="p">(</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">batch_size</span><span class="o">&lt;</span><span class="n">n_threads</span><span class="p">)</span><span class="o">?</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">batch_size</span><span class="o">:</span><span class="n">n_threads</span><span class="p">;</span></div><div class='line' id='LC157'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">n_per_batch</span><span class="o">=</span> <span class="n">floor</span><span class="p">(</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">batch_size</span><span class="o">/</span><span class="n">n_threads</span><span class="p">);</span></div><div class='line' id='LC158'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">remainder</span><span class="o">=</span> <span class="p">(</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">batch_size</span><span class="o">%</span><span class="n">n_threads</span><span class="p">);</span></div><div class='line' id='LC159'><br/></div><div class='line' id='LC160'>&nbsp;&nbsp;<span class="kt">dbn_pthread_arg_t</span> <span class="o">*</span><span class="n">pta</span><span class="o">=</span> <span class="p">(</span><span class="kt">dbn_pthread_arg_t</span><span class="o">*</span><span class="p">)</span><span class="n">Calloc</span><span class="p">(</span><span class="n">n_threads</span><span class="p">,</span> <span class="kt">dbn_pthread_arg_t</span><span class="p">);</span></div><div class='line' id='LC161'>&nbsp;&nbsp;<span class="kt">pthread_t</span> <span class="o">*</span><span class="n">threads</span><span class="o">=</span> <span class="p">(</span><span class="kt">pthread_t</span><span class="o">*</span><span class="p">)</span><span class="n">Calloc</span><span class="p">(</span><span class="n">n_threads</span><span class="p">,</span> <span class="kt">pthread_t</span><span class="p">);</span></div><div class='line' id='LC162'><span class="c1">//  pthread_mutex_init(&amp;backpropagation_mutex, NULL);</span></div><div class='line' id='LC163'>&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span><span class="n">n_threads</span><span class="p">;</span><span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC164'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// Set up data passed to partial_minibatch()</span></div><div class='line' id='LC165'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pta</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">dbn</span><span class="o">=</span> <span class="n">dbn</span><span class="p">;</span></div><div class='line' id='LC166'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pta</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">input</span><span class="o">=</span> <span class="n">input</span><span class="p">;</span></div><div class='line' id='LC167'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pta</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">expected_output</span><span class="o">=</span> <span class="n">expected_output</span><span class="p">;</span></div><div class='line' id='LC168'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pta</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">batch</span><span class="o">=</span> <span class="n">alloc_dwt_from_dbn</span><span class="p">(</span><span class="n">dbn</span><span class="p">);</span></div><div class='line' id='LC169'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pta</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">do_n_elements</span><span class="o">=</span> <span class="p">(</span><span class="n">i</span><span class="o">&lt;</span><span class="p">(</span><span class="n">n_threads</span><span class="o">-</span><span class="mi">1</span><span class="p">))</span><span class="o">?</span><span class="n">n_per_batch</span><span class="o">:</span><span class="p">(</span><span class="n">n_per_batch</span><span class="o">+</span><span class="n">remainder</span><span class="p">);</span> <span class="c1">// For the last thread, only run remaining elements.</span></div><div class='line' id='LC170'><br/></div><div class='line' id='LC171'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pthread_create</span><span class="p">(</span><span class="n">threads</span><span class="o">+</span><span class="n">i</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span> <span class="n">dbn_backprop_partial_minibatch</span><span class="p">,</span> <span class="p">(</span><span class="kt">void</span><span class="o">*</span><span class="p">)(</span><span class="n">pta</span><span class="o">+</span><span class="n">i</span><span class="p">));</span></div><div class='line' id='LC172'><br/></div><div class='line' id='LC173'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// Increment pointers for the next thread.</span></div><div class='line' id='LC174'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">input</span><span class="o">+=</span> <span class="n">pta</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">do_n_elements</span><span class="o">*</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_inputs</span><span class="p">;</span></div><div class='line' id='LC175'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">expected_output</span><span class="o">+=</span> <span class="n">pta</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">do_n_elements</span><span class="o">*</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_outputs</span><span class="p">;</span></div><div class='line' id='LC176'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC177'><br/></div><div class='line' id='LC178'>&nbsp;&nbsp;<span class="c1">// Wait for threads to complete, and combine the data into a single vector.</span></div><div class='line' id='LC179'>&nbsp;&nbsp;<span class="kt">delta_w_t</span> <span class="o">*</span><span class="n">batch</span><span class="p">;</span></div><div class='line' id='LC180'>&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span><span class="n">n_threads</span><span class="p">;</span><span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC181'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">pthread_join</span><span class="p">(</span><span class="n">threads</span><span class="p">[</span><span class="n">i</span><span class="p">],</span> <span class="nb">NULL</span><span class="p">);</span></div><div class='line' id='LC182'><br/></div><div class='line' id='LC183'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">// It&#39;s ~2x faster to prepare independent batch examples and sum after, than to use a mutex lock.</span></div><div class='line' id='LC184'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">i</span><span class="o">==</span><span class="mi">0</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC185'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">batch</span><span class="o">=</span> <span class="n">pta</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">batch</span><span class="p">;</span></div><div class='line' id='LC186'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC187'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC188'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">j</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">j</span><span class="o">&lt;</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_rbms</span><span class="p">;</span><span class="n">j</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC189'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">sum_delta_w</span><span class="p">(</span><span class="o">&amp;</span><span class="p">(</span><span class="n">batch</span><span class="p">[</span><span class="n">j</span><span class="p">]),</span> <span class="o">&amp;</span><span class="p">(</span><span class="n">pta</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">batch</span><span class="p">[</span><span class="n">j</span><span class="p">]));</span></div><div class='line' id='LC190'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC191'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">free_delta_w_ptr</span><span class="p">(</span><span class="n">pta</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">batch</span><span class="p">,</span> <span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_rbms</span><span class="p">);</span></div><div class='line' id='LC192'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC193'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC194'>&nbsp;&nbsp;<span class="n">Free</span><span class="p">(</span><span class="n">pta</span><span class="p">);</span> <span class="n">Free</span><span class="p">(</span><span class="n">threads</span><span class="p">);</span></div><div class='line' id='LC195'><span class="c1">//  pthread_mutex_destroy(&amp;rbm_mutex);</span></div><div class='line' id='LC196'><br/></div><div class='line' id='LC197'>&nbsp;&nbsp;<span class="c1">// Update the weights.</span></div><div class='line' id='LC198'>&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_rbms</span><span class="p">;</span><span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC199'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">rbms</span><span class="p">[</span><span class="n">i</span><span class="p">].</span><span class="n">use_momentum</span><span class="p">)</span> <span class="p">{</span> <span class="c1">// dbn[0] could result in a segfault, if it disagrees w/ rbm (b/c it won&#39;t be init.).</span></div><div class='line' id='LC200'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">apply_momentum_correction</span><span class="p">(</span><span class="o">&amp;</span><span class="p">(</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">rbms</span><span class="p">[</span><span class="n">i</span><span class="p">]),</span> <span class="o">&amp;</span><span class="p">(</span><span class="n">batch</span><span class="p">[</span><span class="n">i</span><span class="p">]));</span></div><div class='line' id='LC201'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC202'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC203'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">apply_delta_w</span><span class="p">(</span><span class="o">&amp;</span><span class="p">(</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">rbms</span><span class="p">[</span><span class="n">i</span><span class="p">]),</span> <span class="o">&amp;</span><span class="p">(</span><span class="n">batch</span><span class="p">[</span><span class="n">i</span><span class="p">]));</span></div><div class='line' id='LC204'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC205'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC206'>&nbsp;&nbsp;<span class="n">free_delta_w_ptr</span><span class="p">(</span><span class="n">batch</span><span class="p">,</span> <span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_rbms</span><span class="p">);</span></div><div class='line' id='LC207'><br/></div><div class='line' id='LC208'><span class="p">}</span></div><div class='line' id='LC209'><span class="c1">/////////////\IF PTREADS, USE THIS. ///////////////////////////////////////////////</span></div><div class='line' id='LC210'><br/></div><div class='line' id='LC211'><span class="cm">/*</span></div><div class='line' id='LC212'><span class="cm"> * Refines the deep belief network using backpropagation of error derivitives for a given number of epocs.</span></div><div class='line' id='LC213'><span class="cm"> *</span></div><div class='line' id='LC214'><span class="cm"> * Arguments: </span></div><div class='line' id='LC215'><span class="cm"> *   dbn           --&gt; Deep belief network -- full specification ...</span></div><div class='line' id='LC216'><span class="cm"> *   input_example --&gt; Input example used for training.  Each columns represents a unique training case.</span></div><div class='line' id='LC217'><span class="cm"> *   output_example--&gt; Output example used for training.  </span></div><div class='line' id='LC218'><span class="cm"> *   n_examples    --&gt; Specifies the number of examples provided.</span></div><div class='line' id='LC219'><span class="cm"> *   n_epocs       --&gt; Specifies the number of times the training program loops over the examples.</span></div><div class='line' id='LC220'><span class="cm"> *</span></div><div class='line' id='LC221'><span class="cm"> * Assumptions: </span></div><div class='line' id='LC222'><span class="cm"> *   --&gt; n_examples is a multiple of dbn.batch_size ... additional examples are ignored.</span></div><div class='line' id='LC223'><span class="cm"> */</span></div><div class='line' id='LC224'><br/></div><div class='line' id='LC225'><span class="kt">void</span> <span class="nf">dbn_refine</span><span class="p">(</span><span class="kt">dbn_t</span> <span class="o">*</span><span class="n">dbn</span><span class="p">,</span> <span class="kt">double</span> <span class="o">*</span><span class="n">input_example</span><span class="p">,</span> <span class="kt">double</span> <span class="o">*</span><span class="n">output_example</span><span class="p">,</span> <span class="kt">int</span> <span class="n">n_examples</span><span class="p">,</span> <span class="kt">int</span> <span class="n">n_epocs</span><span class="p">,</span> <span class="kt">int</span> <span class="n">n_threads</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC226'>&nbsp;&nbsp;<span class="kt">double</span> <span class="o">*</span><span class="n">current_input</span><span class="p">,</span> <span class="o">*</span><span class="n">current_output</span><span class="p">;</span></div><div class='line' id='LC227'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">n_training_iterations</span><span class="o">=</span> <span class="n">floor</span><span class="p">(</span><span class="n">n_examples</span><span class="o">/</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">batch_size</span><span class="p">);</span> </div><div class='line' id='LC228'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">left_over</span><span class="o">=</span> <span class="n">n_examples</span><span class="o">%</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">batch_size</span><span class="p">;</span></div><div class='line' id='LC229'>&nbsp;&nbsp;</div><div class='line' id='LC230'>&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span><span class="n">n_epocs</span><span class="p">;</span><span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC231'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">current_input</span><span class="o">=</span> <span class="n">input_example</span><span class="p">;</span> <span class="c1">// Reset training pointer.</span></div><div class='line' id='LC232'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">current_output</span><span class="o">=</span> <span class="n">output_example</span><span class="p">;</span></div><div class='line' id='LC233'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">j</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">j</span><span class="o">&lt;</span><span class="n">n_training_iterations</span><span class="p">;</span><span class="n">j</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC234'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">backpropagation_minibatch_pthreads</span><span class="p">(</span><span class="n">dbn</span><span class="p">,</span> <span class="n">current_input</span><span class="p">,</span> <span class="n">current_output</span><span class="p">,</span> <span class="n">n_threads</span><span class="p">);</span>  <span class="c1">// Do a minibatch using the current position of the training pointer.</span></div><div class='line' id='LC235'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">current_input</span><span class="o">+=</span> <span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">batch_size</span><span class="o">*</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_inputs</span><span class="p">;</span> <span class="c1">// Increment the input_example pointer batch_size # of columns.</span></div><div class='line' id='LC236'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">current_output</span><span class="o">+=</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">batch_size</span><span class="o">*</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_outputs</span><span class="p">;</span> <span class="c1">// Increment the input_example pointer batch_size # of columns.</span></div><div class='line' id='LC237'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC238'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span><span class="p">(</span><span class="n">left_over</span><span class="o">&gt;</span><span class="mi">0</span><span class="p">)</span> <span class="p">{</span> <span class="c1">// Do remaining training examples.</span></div><div class='line' id='LC239'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">int</span> <span class="n">old_batch_size</span><span class="o">=</span> <span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">batch_size</span><span class="p">;</span></div><div class='line' id='LC240'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">batch_size</span><span class="o">=</span> <span class="n">left_over</span><span class="p">;</span></div><div class='line' id='LC241'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">backpropagation_minibatch_pthreads</span><span class="p">(</span><span class="n">dbn</span><span class="p">,</span> <span class="n">current_input</span><span class="p">,</span> <span class="n">current_output</span><span class="p">,</span> <span class="n">n_threads</span><span class="p">);</span>  <span class="c1">// Do a minibatch using the current position of the training pointer.</span></div><div class='line' id='LC242'>	  <span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">batch_size</span><span class="o">=</span> <span class="n">old_batch_size</span><span class="p">;</span></div><div class='line' id='LC243'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC244'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC245'><span class="p">}</span></div><div class='line' id='LC246'><br/></div><div class='line' id='LC247'><span class="cm">/* labels_to_matrix --&gt; Converts an R factor type into a double* matrix.</span></div><div class='line' id='LC248'><span class="cm"> *</span></div><div class='line' id='LC249'><span class="cm"> * training_labels_r --&gt; SEXP Integers, from a factor... assumed to be \set: [1,N_outputs], inclusive.</span></div><div class='line' id='LC250'><span class="cm"> * n_outputs --&gt; Number of output nodes.  (i.e. # rows in output).</span></div><div class='line' id='LC251'><span class="cm"> * </span></div><div class='line' id='LC252'><span class="cm"> * #columns in return double* ==&gt; n_samples</span></div><div class='line' id='LC253'><span class="cm"> */</span></div><div class='line' id='LC254'><span class="kt">double</span> <span class="o">*</span><span class="nf">labels_to_matrix</span><span class="p">(</span><span class="n">SEXP</span> <span class="n">training_labels_r</span><span class="p">,</span> <span class="kt">int</span> <span class="n">n_outputs</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC255'>&nbsp;&nbsp;<span class="kt">int</span> <span class="o">*</span><span class="n">tlr</span><span class="o">=</span> <span class="n">INTEGER</span><span class="p">(</span><span class="n">training_labels_r</span><span class="p">);</span></div><div class='line' id='LC256'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">n_samples</span><span class="o">=</span> <span class="n">Rf_nrows</span><span class="p">(</span><span class="n">training_labels_r</span><span class="p">);</span></div><div class='line' id='LC257'>&nbsp;&nbsp;<span class="kt">double</span> <span class="o">*</span><span class="n">matrix</span><span class="o">=</span> <span class="p">(</span><span class="kt">double</span><span class="o">*</span><span class="p">)</span><span class="n">R_alloc</span><span class="p">(</span><span class="n">n_samples</span><span class="o">*</span><span class="n">n_outputs</span><span class="p">,</span> <span class="k">sizeof</span><span class="p">(</span><span class="kt">double</span><span class="p">));</span></div><div class='line' id='LC258'>&nbsp;&nbsp;</div><div class='line' id='LC259'>&nbsp;&nbsp;<span class="c1">// Make a matrix a 1 in the appropriate place in each column.</span></div><div class='line' id='LC260'>&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">i</span><span class="o">&lt;</span><span class="n">n_samples</span><span class="p">;</span><span class="n">i</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span> <span class="c1">// Columns.</span></div><div class='line' id='LC261'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span><span class="p">(</span><span class="kt">int</span> <span class="n">j</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span><span class="n">j</span><span class="o">&lt;</span><span class="n">n_outputs</span><span class="p">;</span><span class="n">j</span><span class="o">++</span><span class="p">)</span> <span class="p">{</span> <span class="c1">// Rows.</span></div><div class='line' id='LC262'>	  <span class="n">matrix</span><span class="p">[</span><span class="n">i</span><span class="o">*</span><span class="n">n_outputs</span><span class="o">+</span><span class="n">j</span><span class="p">]</span><span class="o">=</span> <span class="p">((</span><span class="n">j</span><span class="o">+</span><span class="mi">1</span><span class="p">)</span><span class="o">==</span><span class="n">tlr</span><span class="p">[</span><span class="n">i</span><span class="p">])</span><span class="o">?</span><span class="mi">1</span><span class="o">:</span><span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC263'>	<span class="p">}</span></div><div class='line' id='LC264'>&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC265'>&nbsp;&nbsp;</div><div class='line' id='LC266'>&nbsp;&nbsp;<span class="k">return</span><span class="p">(</span><span class="n">matrix</span><span class="p">);</span></div><div class='line' id='LC267'><span class="p">}</span></div><div class='line' id='LC268'><br/></div><div class='line' id='LC269'><span class="cm">/*</span></div><div class='line' id='LC270'><span class="cm"> *  R interface to refining a deep belief network for discriminitive tasks using backpropagation ...</span></div><div class='line' id='LC271'><span class="cm"> */</span> </div><div class='line' id='LC272'><span class="n">SEXP</span> <span class="nf">backpropagation_dbn_R</span><span class="p">(</span><span class="n">SEXP</span> <span class="n">dbn_r</span><span class="p">,</span> <span class="n">SEXP</span> <span class="n">training_data_r</span><span class="p">,</span> <span class="n">SEXP</span> <span class="n">training_labels_r</span><span class="p">,</span> <span class="n">SEXP</span> <span class="n">n_epocs_r</span><span class="p">,</span> <span class="n">SEXP</span> <span class="n">n_threads_r</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC273'>&nbsp;&nbsp;<span class="kt">dbn_t</span> <span class="o">*</span><span class="n">dbn</span><span class="o">=</span> <span class="n">dbn_r_to_c</span><span class="p">(</span><span class="n">dbn_r</span><span class="p">);</span> <span class="c1">// Get values from R function.</span></div><div class='line' id='LC274'>&nbsp;&nbsp;<span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">rbms</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">update_input_bias</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span> <span class="c1">// Prevent updating input biases during backprop.</span></div><div class='line' id='LC275'><br/></div><div class='line' id='LC276'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">n_examples</span><span class="o">=</span> <span class="n">Rf_nrows</span><span class="p">(</span><span class="n">training_data_r</span><span class="p">)</span><span class="o">/</span><span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_inputs</span><span class="p">;</span></div><div class='line' id='LC277'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">n_threads</span><span class="o">=</span> <span class="n">INTEGER</span><span class="p">(</span><span class="n">n_threads_r</span><span class="p">)[</span><span class="mi">0</span><span class="p">];</span></div><div class='line' id='LC278'>&nbsp;&nbsp;<span class="kt">double</span> <span class="o">*</span><span class="n">input_examples</span><span class="o">=</span> <span class="n">REAL</span><span class="p">(</span><span class="n">training_data_r</span><span class="p">);</span></div><div class='line' id='LC279'>&nbsp;&nbsp;<span class="kt">double</span> <span class="o">*</span><span class="n">output_examples</span><span class="o">=</span> <span class="n">labels_to_matrix</span><span class="p">(</span><span class="n">training_labels_r</span><span class="p">,</span> <span class="n">dbn</span><span class="p">[</span><span class="mi">0</span><span class="p">].</span><span class="n">n_outputs</span><span class="p">);</span></div><div class='line' id='LC280'><br/></div><div class='line' id='LC281'>&nbsp;&nbsp;<span class="kt">int</span> <span class="n">n_epocs</span><span class="o">=</span> <span class="n">INTEGER</span><span class="p">(</span><span class="n">n_epocs_r</span><span class="p">)[</span><span class="mi">0</span><span class="p">];</span></div><div class='line' id='LC282'><br/></div><div class='line' id='LC283'>&nbsp;&nbsp;<span class="n">dbn_refine</span><span class="p">(</span><span class="n">dbn</span><span class="p">,</span> <span class="n">input_examples</span><span class="p">,</span> <span class="n">output_examples</span><span class="p">,</span> <span class="n">n_examples</span><span class="p">,</span> <span class="n">n_epocs</span><span class="p">,</span> <span class="n">n_threads</span><span class="p">);</span></div><div class='line' id='LC284'>&nbsp;&nbsp;</div><div class='line' id='LC285'>&nbsp;&nbsp;<span class="k">return</span><span class="p">(</span><span class="n">dbn_r</span><span class="p">);</span></div><div class='line' id='LC286'><span class="p">}</span></div><div class='line' id='LC287'><br/></div></pre></div>
          </td>
        </tr>
      </table>
  </div>

          </div>
        </div>

        <a href="#jump-to-line" rel="facebox" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
        <div id="jump-to-line" style="display:none">
          <h2>Jump to Line</h2>
          <form accept-charset="UTF-8" class="js-jump-to-line-form">
            <input class="textfield js-jump-to-line-field" type="text">
            <div class="full-button">
              <button type="submit" class="button">Go</button>
            </div>
          </form>
        </div>

      </div>
    </div>
</div>

<div id="js-frame-loading-template" class="frame frame-loading large-loading-area" style="display:none;">
  <img class="js-frame-loading-spinner" src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-128.gif?1347543528" height="64" width="64">
</div>


        </div>
      </div>
      <div class="context-overlay"></div>
    </div>

      <div id="footer-push"></div><!-- hack for sticky footer -->
    </div><!-- end of wrapper - hack for sticky footer -->

      <!-- footer -->
      <div id="footer">
  <div class="container clearfix">

      <dl class="footer_nav">
        <dt>GitHub</dt>
        <dd><a href="https://github.com/about">About us</a></dd>
        <dd><a href="https://github.com/blog">Blog</a></dd>
        <dd><a href="https://github.com/contact">Contact &amp; support</a></dd>
        <dd><a href="http://enterprise.github.com/">GitHub Enterprise</a></dd>
        <dd><a href="http://status.github.com/">Site status</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Applications</dt>
        <dd><a href="http://mac.github.com/">GitHub for Mac</a></dd>
        <dd><a href="http://windows.github.com/">GitHub for Windows</a></dd>
        <dd><a href="http://eclipse.github.com/">GitHub for Eclipse</a></dd>
        <dd><a href="http://mobile.github.com/">GitHub mobile apps</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Services</dt>
        <dd><a href="http://get.gaug.es/">Gauges: Web analytics</a></dd>
        <dd><a href="http://speakerdeck.com">Speaker Deck: Presentations</a></dd>
        <dd><a href="https://gist.github.com">Gist: Code snippets</a></dd>
        <dd><a href="http://jobs.github.com/">Job board</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Documentation</dt>
        <dd><a href="http://help.github.com/">GitHub Help</a></dd>
        <dd><a href="http://developer.github.com/">Developer API</a></dd>
        <dd><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></dd>
        <dd><a href="http://pages.github.com/">GitHub Pages</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>More</dt>
        <dd><a href="http://training.github.com/">Training</a></dd>
        <dd><a href="https://github.com/edu">Students &amp; teachers</a></dd>
        <dd><a href="http://shop.github.com">The Shop</a></dd>
        <dd><a href="/plans">Plans &amp; pricing</a></dd>
        <dd><a href="http://octodex.github.com/">The Octodex</a></dd>
      </dl>

      <hr class="footer-divider">


    <p class="right">&copy; 2013 <span title="0.16574s from fe1.rs.github.com">GitHub</span>, Inc. All rights reserved.</p>
    <a class="left" href="https://github.com/">
      <span class="mega-icon mega-icon-invertocat"></span>
    </a>
    <ul id="legal">
        <li><a href="https://github.com/site/terms">Terms of Service</a></li>
        <li><a href="https://github.com/site/privacy">Privacy</a></li>
        <li><a href="https://github.com/security">Security</a></li>
    </ul>

  </div><!-- /.container -->

</div><!-- /.#footer -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
          <div class="suggester-container">
              <div class="suggester fullscreen-suggester js-navigation-container" id="fullscreen_suggester"
                 data-url="/dankoc/Rdbn/suggestions/commit">
              </div>
          </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped leftwards" title="Exit Zen Mode">
      <span class="mega-icon mega-icon-normalscreen"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped leftwards"
      title="Switch themes">
      <span class="mini-icon mini-icon-brightness"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="mini-icon mini-icon-exclamation"></span>
      Something went wrong with that request. Please try again.
      <a href="#" class="mini-icon mini-icon-remove-close ajax-error-dismiss"></a>
    </div>

    
    
    <span id='server_response_time' data-time='0.16626' data-host='fe1'></span>
    
  </body>
</html>

